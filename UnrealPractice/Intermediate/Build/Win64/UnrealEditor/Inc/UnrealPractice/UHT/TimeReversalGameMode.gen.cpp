// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/TimeReversalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeReversalGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ATimeReversalGameMode();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ATimeReversalGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class ATimeReversalGameMode Function GetTimeManager
struct Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics
{
	struct TimeReversalGameMode_eventGetTimeManager_Parms
	{
		ATimeManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimeReversalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeReversalGameMode_eventGetTimeManager_Parms, ReturnValue), Z_Construct_UClass_ATimeManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeReversalGameMode, nullptr, "GetTimeManager", nullptr, nullptr, Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::TimeReversalGameMode_eventGetTimeManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::TimeReversalGameMode_eventGetTimeManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimeReversalGameMode::execGetTimeManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATimeManager**)Z_Param__Result=P_THIS->GetTimeManager();
	P_NATIVE_END;
}
// End Class ATimeReversalGameMode Function GetTimeManager

// Begin Class ATimeReversalGameMode
void ATimeReversalGameMode::StaticRegisterNativesATimeReversalGameMode()
{
	UClass* Class = ATimeReversalGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTimeManager", &ATimeReversalGameMode::execGetTimeManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeReversalGameMode);
UClass* Z_Construct_UClass_ATimeReversalGameMode_NoRegister()
{
	return ATimeReversalGameMode::StaticClass();
}
struct Z_Construct_UClass_ATimeReversalGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TimeReversalGameMode.h" },
		{ "ModuleRelativePath", "Public/TimeReversalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeManager_MetaData[] = {
		{ "Category", "TimeReversalGameMode" },
		{ "ModuleRelativePath", "Public/TimeReversalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_timeManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeReversalGameMode_GetTimeManager, "GetTimeManager" }, // 35638990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeReversalGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeReversalGameMode_Statics::NewProp_timeManager = { "timeManager", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeReversalGameMode, timeManager), Z_Construct_UClass_ATimeManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeManager_MetaData), NewProp_timeManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeReversalGameMode_Statics::NewProp_timeManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimeReversalGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeReversalGameMode_Statics::ClassParams = {
	&ATimeReversalGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeReversalGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeReversalGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimeReversalGameMode()
{
	if (!Z_Registration_Info_UClass_ATimeReversalGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeReversalGameMode.OuterSingleton, Z_Construct_UClass_ATimeReversalGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimeReversalGameMode.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<ATimeReversalGameMode>()
{
	return ATimeReversalGameMode::StaticClass();
}
ATimeReversalGameMode::ATimeReversalGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeReversalGameMode);
ATimeReversalGameMode::~ATimeReversalGameMode() {}
// End Class ATimeReversalGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeReversalGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimeReversalGameMode, ATimeReversalGameMode::StaticClass, TEXT("ATimeReversalGameMode"), &Z_Registration_Info_UClass_ATimeReversalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeReversalGameMode), 1102497144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeReversalGameMode_h_48502293(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeReversalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeReversalGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
