// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/XPPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXPPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UNREALPRACTICE_API UClass* Z_Construct_UClass_AXPPawn();
UNREALPRACTICE_API UClass* Z_Construct_UClass_AXPPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class AXPPawn
void AXPPawn::StaticRegisterNativesAXPPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXPPawn);
UClass* Z_Construct_UClass_AXPPawn_NoRegister()
{
	return AXPPawn::StaticClass();
}
struct Z_Construct_UClass_AXPPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "XPPawn.h" },
		{ "ModuleRelativePath", "Public/XPPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerMesh_MetaData[] = {
		{ "Category", "XPPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XPPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[] = {
		{ "Category", "XPPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XPPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[] = {
		{ "Category", "XPPawn" },
		{ "ModuleRelativePath", "Public/XPPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "XPPawn" },
		{ "ModuleRelativePath", "Public/XPPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXPPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXPPawn_Statics::NewProp_playerMesh = { "playerMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXPPawn, playerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerMesh_MetaData), NewProp_playerMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AXPPawn_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXPPawn, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerCamera_MetaData), NewProp_playerCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXPPawn_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXPPawn, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveSpeed_MetaData), NewProp_moveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AXPPawn_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AXPPawn, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationSpeed_MetaData), NewProp_rotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXPPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXPPawn_Statics::NewProp_playerMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXPPawn_Statics::NewProp_playerCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXPPawn_Statics::NewProp_moveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXPPawn_Statics::NewProp_rotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXPPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AXPPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AXPPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AXPPawn_Statics::ClassParams = {
	&AXPPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AXPPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AXPPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AXPPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AXPPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AXPPawn()
{
	if (!Z_Registration_Info_UClass_AXPPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXPPawn.OuterSingleton, Z_Construct_UClass_AXPPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AXPPawn.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<AXPPawn>()
{
	return AXPPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AXPPawn);
AXPPawn::~AXPPawn() {}
// End Class AXPPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_XPPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AXPPawn, AXPPawn::StaticClass, TEXT("AXPPawn"), &Z_Registration_Info_UClass_AXPPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXPPawn), 214110428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_XPPawn_h_1954785203(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_XPPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_XPPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
