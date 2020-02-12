// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapabilityDetect/Public/CapabilityDetectBPLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapabilityDetectBPLib() {}
// Cross Module References
	CAPABILITYDETECT_API UClass* Z_Construct_UClass_UCapabilityDetectBPLib_NoRegister();
	CAPABILITYDETECT_API UClass* Z_Construct_UClass_UCapabilityDetectBPLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CapabilityDetect();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName();
// End Cross Module References
	void UCapabilityDetectBPLib::StaticRegisterNativesUCapabilityDetectBPLib()
	{
		UClass* Class = UCapabilityDetectBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeCPUPerfIndex", &UCapabilityDetectBPLib::execComputeCPUPerfIndex },
			{ "ComputeGPUPerfIndex", &UCapabilityDetectBPLib::execComputeGPUPerfIndex },
			{ "FreeResources", &UCapabilityDetectBPLib::execFreeResources },
			{ "GetAvailableMemoryMB", &UCapabilityDetectBPLib::execGetAvailableMemoryMB },
			{ "GetCacheSizeMB", &UCapabilityDetectBPLib::execGetCacheSizeMB },
			{ "GetComittedMemoryMB", &UCapabilityDetectBPLib::execGetComittedMemoryMB },
			{ "GetCoreFrequency", &UCapabilityDetectBPLib::execGetCoreFrequency },
			{ "GetCorePercMaxFrequency", &UCapabilityDetectBPLib::execGetCorePercMaxFrequency },
			{ "GetFullProcessorName", &UCapabilityDetectBPLib::execGetFullProcessorName },
			{ "GetMaxBaseFrequency", &UCapabilityDetectBPLib::execGetMaxBaseFrequency },
			{ "GetNumLogicalCores", &UCapabilityDetectBPLib::execGetNumLogicalCores },
			{ "GetNumPhysicalCores", &UCapabilityDetectBPLib::execGetNumPhysicalCores },
			{ "GetProcessorName", &UCapabilityDetectBPLib::execGetProcessorName },
			{ "GetUsablePhysMemoryGB", &UCapabilityDetectBPLib::execGetUsablePhysMemoryGB },
			{ "InitializeResources", &UCapabilityDetectBPLib::execInitializeResources },
			{ "IsIntelCPU", &UCapabilityDetectBPLib::execIsIntelCPU },
			{ "IsRHIAMD", &UCapabilityDetectBPLib::execIsRHIAMD },
			{ "IsRHIIntel", &UCapabilityDetectBPLib::execIsRHIIntel },
			{ "IsRHINVIDIA", &UCapabilityDetectBPLib::execIsRHINVIDIA },
			{ "RHIVendorName", &UCapabilityDetectBPLib::execRHIVendorName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics
	{
		struct CapabilityDetectBPLib_eventComputeCPUPerfIndex_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventComputeCPUPerfIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CPU Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "ComputeCPUPerfIndex", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventComputeCPUPerfIndex_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics
	{
		struct CapabilityDetectBPLib_eventComputeGPUPerfIndex_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventComputeGPUPerfIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CPU Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "ComputeGPUPerfIndex", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventComputeGPUPerfIndex_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "Comment", "// Cleans up resources.\n" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
		{ "ToolTip", "Cleans up resources." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "FreeResources", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics
	{
		struct CapabilityDetectBPLib_eventGetAvailableMemoryMB_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetAvailableMemoryMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetAvailableMemoryMB", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetAvailableMemoryMB_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics
	{
		struct CapabilityDetectBPLib_eventGetCacheSizeMB_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetCacheSizeMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetCacheSizeMB", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetCacheSizeMB_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics
	{
		struct CapabilityDetectBPLib_eventGetComittedMemoryMB_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetComittedMemoryMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetComittedMemoryMB", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetComittedMemoryMB_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics
	{
		struct CapabilityDetectBPLib_eventGetCoreFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetCoreFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "Comment", "// These are used in GetMaxFrequency() calculation.\n// GetCoreFreq returns the frequency at collection time, while PercMaxFrequency returns the percentage of the maximum frequency.\n" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
		{ "ToolTip", "These are used in GetMaxFrequency() calculation.\nGetCoreFreq returns the frequency at collection time, while PercMaxFrequency returns the percentage of the maximum frequency." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetCoreFrequency", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetCoreFrequency_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics
	{
		struct CapabilityDetectBPLib_eventGetCorePercMaxFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetCorePercMaxFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetCorePercMaxFrequency", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetCorePercMaxFrequency_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics
	{
		struct CapabilityDetectBPLib_eventGetFullProcessorName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetFullProcessorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetFullProcessorName", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetFullProcessorName_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics
	{
		struct CapabilityDetectBPLib_eventGetMaxBaseFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetMaxBaseFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetMaxBaseFrequency", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetMaxBaseFrequency_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics
	{
		struct CapabilityDetectBPLib_eventGetNumLogicalCores_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetNumLogicalCores_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "Comment", "// These are the getters used in the bucketing decision\n// They can be used to create your own bucketing solution\n" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
		{ "ToolTip", "These are the getters used in the bucketing decision\nThey can be used to create your own bucketing solution" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetNumLogicalCores", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetNumLogicalCores_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics
	{
		struct CapabilityDetectBPLib_eventGetNumPhysicalCores_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetNumPhysicalCores_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "Comment", "// Not used in the internal calculation, but are exposed to help\n// create more elaborate bucketing systems\n" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
		{ "ToolTip", "Not used in the internal calculation, but are exposed to help\ncreate more elaborate bucketing systems" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetNumPhysicalCores", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetNumPhysicalCores_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics
	{
		struct CapabilityDetectBPLib_eventGetProcessorName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetProcessorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetProcessorName", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetProcessorName_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics
	{
		struct CapabilityDetectBPLib_eventGetUsablePhysMemoryGB_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetUsablePhysMemoryGB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "GetUsablePhysMemoryGB", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventGetUsablePhysMemoryGB_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "Comment", "// Initializes Values.\n" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
		{ "ToolTip", "Initializes Values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "InitializeResources", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics
	{
		struct CapabilityDetectBPLib_eventIsIntelCPU_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CapabilityDetectBPLib_eventIsIntelCPU_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CapabilityDetectBPLib_eventIsIntelCPU_Parms), &Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "IsIntelCPU", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventIsIntelCPU_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics
	{
		struct CapabilityDetectBPLib_eventIsRHIAMD_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CapabilityDetectBPLib_eventIsRHIAMD_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CapabilityDetectBPLib_eventIsRHIAMD_Parms), &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPU Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "IsRHIAMD", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventIsRHIAMD_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics
	{
		struct CapabilityDetectBPLib_eventIsRHIIntel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CapabilityDetectBPLib_eventIsRHIIntel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CapabilityDetectBPLib_eventIsRHIIntel_Parms), &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPU Capability Detect Library" },
		{ "Comment", "// RHI Blueprint Function Wrappers\n" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
		{ "ToolTip", "RHI Blueprint Function Wrappers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "IsRHIIntel", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventIsRHIIntel_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics
	{
		struct CapabilityDetectBPLib_eventIsRHINVIDIA_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CapabilityDetectBPLib_eventIsRHINVIDIA_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CapabilityDetectBPLib_eventIsRHINVIDIA_Parms), &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPU Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "IsRHINVIDIA", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventIsRHINVIDIA_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics
	{
		struct CapabilityDetectBPLib_eventRHIVendorName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CapabilityDetectBPLib_eventRHIVendorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPU Capability Detect Library" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, nullptr, "RHIVendorName", nullptr, nullptr, sizeof(CapabilityDetectBPLib_eventRHIVendorName_Parms), Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCapabilityDetectBPLib_NoRegister()
	{
		return UCapabilityDetectBPLib::StaticClass();
	}
	struct Z_Construct_UClass_UCapabilityDetectBPLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCapabilityDetectBPLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CapabilityDetect,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCapabilityDetectBPLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex, "ComputeCPUPerfIndex" }, // 1437912501
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex, "ComputeGPUPerfIndex" }, // 230792904
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources, "FreeResources" }, // 1935031530
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB, "GetAvailableMemoryMB" }, // 2153658179
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB, "GetCacheSizeMB" }, // 3326411546
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB, "GetComittedMemoryMB" }, // 2576967402
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency, "GetCoreFrequency" }, // 9258719
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency, "GetCorePercMaxFrequency" }, // 1037646176
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName, "GetFullProcessorName" }, // 834970579
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency, "GetMaxBaseFrequency" }, // 1157931393
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores, "GetNumLogicalCores" }, // 3336336664
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores, "GetNumPhysicalCores" }, // 3362486987
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName, "GetProcessorName" }, // 3804743097
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB, "GetUsablePhysMemoryGB" }, // 3229114703
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources, "InitializeResources" }, // 3462313124
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU, "IsIntelCPU" }, // 541532760
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD, "IsRHIAMD" }, // 3721200262
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel, "IsRHIIntel" }, // 3403400891
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA, "IsRHINVIDIA" }, // 2906911506
		{ &Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName, "RHIVendorName" }, // 2472597869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCapabilityDetectBPLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapabilityDetectBPLib.h" },
		{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCapabilityDetectBPLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCapabilityDetectBPLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCapabilityDetectBPLib_Statics::ClassParams = {
		&UCapabilityDetectBPLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCapabilityDetectBPLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCapabilityDetectBPLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCapabilityDetectBPLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCapabilityDetectBPLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCapabilityDetectBPLib, 2589055119);
	template<> CAPABILITYDETECT_API UClass* StaticClass<UCapabilityDetectBPLib>()
	{
		return UCapabilityDetectBPLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCapabilityDetectBPLib(Z_Construct_UClass_UCapabilityDetectBPLib, &UCapabilityDetectBPLib::StaticClass, TEXT("/Script/CapabilityDetect"), TEXT("UCapabilityDetectBPLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapabilityDetectBPLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
