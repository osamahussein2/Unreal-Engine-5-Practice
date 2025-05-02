// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/PracticeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREALPRACTICE_API UClass* Z_Construct_UClass_APracticeGameMode();
UNREALPRACTICE_API UClass* Z_Construct_UClass_APracticeGameMode_NoRegister();
UNREALPRACTICE_API UClass* Z_Construct_UClass_AXPCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class APracticeGameMode
void APracticeGameMode::StaticRegisterNativesAPracticeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APracticeGameMode);
UClass* Z_Construct_UClass_APracticeGameMode_NoRegister()
{
	return APracticeGameMode::StaticClass();
}
struct Z_Construct_UClass_APracticeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PracticeGameMode.h" },
		{ "ModuleRelativePath", "Public/PracticeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_customXPCharacterClass_MetaData[] = {
		{ "Category", "PracticeGameMode" },
		{ "ModuleRelativePath", "Public/PracticeGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_customXPCharacterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APracticeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APracticeGameMode_Statics::NewProp_customXPCharacterClass = { "customXPCharacterClass", nullptr, (EPropertyFlags)0x0044000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APracticeGameMode, customXPCharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AXPCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_customXPCharacterClass_MetaData), NewProp_customXPCharacterClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APracticeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APracticeGameMode_Statics::NewProp_customXPCharacterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APracticeGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APracticeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APracticeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APracticeGameMode_Statics::ClassParams = {
	&APracticeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APracticeGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APracticeGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APracticeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APracticeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APracticeGameMode()
{
	if (!Z_Registration_Info_UClass_APracticeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APracticeGameMode.OuterSingleton, Z_Construct_UClass_APracticeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APracticeGameMode.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<APracticeGameMode>()
{
	return APracticeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APracticeGameMode);
APracticeGameMode::~APracticeGameMode() {}
// End Class APracticeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_PracticeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APracticeGameMode, APracticeGameMode::StaticClass, TEXT("APracticeGameMode"), &Z_Registration_Info_UClass_APracticeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APracticeGameMode), 2383710727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_PracticeGameMode_h_2886045239(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_PracticeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_PracticeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
