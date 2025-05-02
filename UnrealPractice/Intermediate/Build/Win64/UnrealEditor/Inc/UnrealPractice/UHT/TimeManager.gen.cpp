// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/TimeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ATimeManager();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class ATimeManager Function BeginTimeReverse
struct Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "BeginTimeReverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATimeManager_BeginTimeReverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_BeginTimeReverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimeManager::execBeginTimeReverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginTimeReverse();
	P_NATIVE_END;
}
// End Class ATimeManager Function BeginTimeReverse

// Begin Class ATimeManager Function EndTimeReverse
struct Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "EndTimeReverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATimeManager_EndTimeReverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_EndTimeReverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimeManager::execEndTimeReverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTimeReverse();
	P_NATIVE_END;
}
// End Class ATimeManager Function EndTimeReverse

// Begin Class ATimeManager Function GetTimeFactor
struct Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics
{
	struct TimeManager_eventGetTimeFactor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeManager_eventGetTimeFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, nullptr, "GetTimeFactor", nullptr, nullptr, Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::TimeManager_eventGetTimeFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::TimeManager_eventGetTimeFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATimeManager_GetTimeFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeManager_GetTimeFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimeManager::execGetTimeFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeFactor();
	P_NATIVE_END;
}
// End Class ATimeManager Function GetTimeFactor

// Begin Class ATimeManager
void ATimeManager::StaticRegisterNativesATimeManager()
{
	UClass* Class = ATimeManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginTimeReverse", &ATimeManager::execBeginTimeReverse },
		{ "EndTimeReverse", &ATimeManager::execEndTimeReverse },
		{ "GetTimeFactor", &ATimeManager::execGetTimeFactor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeManager);
UClass* Z_Construct_UClass_ATimeManager_NoRegister()
{
	return ATimeManager::StaticClass();
}
struct Z_Construct_UClass_ATimeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TimeManager.h" },
		{ "ModuleRelativePath", "Public/TimeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentTimeFactor_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Public/TimeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_normalTimeFactor_MetaData[] = {
		{ "Category", "TimeManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Magic time values\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magic time values" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_reverseTimeFactor_MetaData[] = {
		{ "Category", "TimeManager" },
		{ "ModuleRelativePath", "Public/TimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentTimeFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_normalTimeFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_reverseTimeFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeManager_BeginTimeReverse, "BeginTimeReverse" }, // 1320465413
		{ &Z_Construct_UFunction_ATimeManager_EndTimeReverse, "EndTimeReverse" }, // 243649565
		{ &Z_Construct_UFunction_ATimeManager_GetTimeFactor, "GetTimeFactor" }, // 3155876696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_currentTimeFactor = { "currentTimeFactor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, currentTimeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentTimeFactor_MetaData), NewProp_currentTimeFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_normalTimeFactor = { "normalTimeFactor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, normalTimeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_normalTimeFactor_MetaData), NewProp_normalTimeFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeManager_Statics::NewProp_reverseTimeFactor = { "reverseTimeFactor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeManager, reverseTimeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_reverseTimeFactor_MetaData), NewProp_reverseTimeFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_currentTimeFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_normalTimeFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeManager_Statics::NewProp_reverseTimeFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeManager_Statics::ClassParams = {
	&ATimeManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATimeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimeManager()
{
	if (!Z_Registration_Info_UClass_ATimeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeManager.OuterSingleton, Z_Construct_UClass_ATimeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimeManager.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<ATimeManager>()
{
	return ATimeManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeManager);
ATimeManager::~ATimeManager() {}
// End Class ATimeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimeManager, ATimeManager::StaticClass, TEXT("ATimeManager"), &Z_Registration_Info_UClass_ATimeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeManager), 1277155422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_3833972061(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
