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
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UNREALPRACTICE_API UClass* Z_Construct_UClass_APracticeGameMode();
UNREALPRACTICE_API UClass* Z_Construct_UClass_APracticeGameMode_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APracticeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_APracticeGameMode, APracticeGameMode::StaticClass, TEXT("APracticeGameMode"), &Z_Registration_Info_UClass_APracticeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APracticeGameMode), 243455900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_PracticeGameMode_h_1340004738(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_PracticeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_PracticeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
