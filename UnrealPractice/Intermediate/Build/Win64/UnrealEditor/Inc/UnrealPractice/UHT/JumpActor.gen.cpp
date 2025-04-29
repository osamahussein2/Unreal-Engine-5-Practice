// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/JumpActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UNREALPRACTICE_API UClass* Z_Construct_UClass_AJumpActor();
UNREALPRACTICE_API UClass* Z_Construct_UClass_AJumpActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class AJumpActor
void AJumpActor::StaticRegisterNativesAJumpActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJumpActor);
UClass* Z_Construct_UClass_AJumpActor_NoRegister()
{
	return AJumpActor::StaticClass();
}
struct Z_Construct_UClass_AJumpActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JumpActor.h" },
		{ "ModuleRelativePath", "Public/JumpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpMesh_MetaData[] = {
		{ "Category", "JumpActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpHeight_MetaData[] = {
		{ "Category", "Jump Settings" },
		{ "ModuleRelativePath", "Public/JumpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpOffset_MetaData[] = {
		{ "Category", "Jump Settings" },
		{ "ModuleRelativePath", "Public/JumpActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpSpeed_MetaData[] = {
		{ "Category", "Jump Settings" },
		{ "ModuleRelativePath", "Public/JumpActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpMesh = { "jumpMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpActor, jumpMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpMesh_MetaData), NewProp_jumpMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpHeight = { "jumpHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpActor, jumpHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpHeight_MetaData), NewProp_jumpHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpOffset = { "jumpOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpActor, jumpOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpOffset_MetaData), NewProp_jumpOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpSpeed = { "jumpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpActor, jumpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpSpeed_MetaData), NewProp_jumpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJumpActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpActor_Statics::NewProp_jumpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJumpActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumpActor_Statics::ClassParams = {
	&AJumpActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AJumpActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJumpActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumpActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJumpActor()
{
	if (!Z_Registration_Info_UClass_AJumpActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumpActor.OuterSingleton, Z_Construct_UClass_AJumpActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJumpActor.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<AJumpActor>()
{
	return AJumpActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpActor);
AJumpActor::~AJumpActor() {}
// End Class AJumpActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_JumpActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJumpActor, AJumpActor::StaticClass, TEXT("AJumpActor"), &Z_Registration_Info_UClass_AJumpActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumpActor), 4283121329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_JumpActor_h_3611333257(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_JumpActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_JumpActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
