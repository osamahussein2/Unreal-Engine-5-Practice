// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/ReverseTimeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReverseTimeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UReverseTimeComponent();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UReverseTimeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class UReverseTimeComponent
void UReverseTimeComponent::StaticRegisterNativesUReverseTimeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReverseTimeComponent);
UClass* Z_Construct_UClass_UReverseTimeComponent_NoRegister()
{
	return UReverseTimeComponent::StaticClass();
}
struct Z_Construct_UClass_UReverseTimeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ReverseTimeComponent.h" },
		{ "ModuleRelativePath", "Public/ReverseTimeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_timeManager_MetaData[] = {
		{ "Category", "ReverseTimeComponent" },
		{ "ModuleRelativePath", "Public/ReverseTimeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_timeManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverseTimeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReverseTimeComponent_Statics::NewProp_timeManager = { "timeManager", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UReverseTimeComponent, timeManager), Z_Construct_UClass_ATimeManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_timeManager_MetaData), NewProp_timeManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReverseTimeComponent_Statics::NewProp_timeManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UReverseTimeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReverseTimeComponent_Statics::ClassParams = {
	&UReverseTimeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UReverseTimeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReverseTimeComponent()
{
	if (!Z_Registration_Info_UClass_UReverseTimeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReverseTimeComponent.OuterSingleton, Z_Construct_UClass_UReverseTimeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReverseTimeComponent.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<UReverseTimeComponent>()
{
	return UReverseTimeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReverseTimeComponent);
UReverseTimeComponent::~UReverseTimeComponent() {}
// End Class UReverseTimeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_ReverseTimeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReverseTimeComponent, UReverseTimeComponent::StaticClass, TEXT("UReverseTimeComponent"), &Z_Registration_Info_UClass_UReverseTimeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReverseTimeComponent), 4153966680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_ReverseTimeComponent_h_1383850630(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_ReverseTimeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_ReverseTimeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
