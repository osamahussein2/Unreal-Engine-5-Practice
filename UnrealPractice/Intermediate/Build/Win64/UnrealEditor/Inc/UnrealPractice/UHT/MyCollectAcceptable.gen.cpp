// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/MyCollectAcceptable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCollectAcceptable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UMyCollectAcceptable();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UMyCollectAcceptable_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Interface UMyCollectAcceptable Function Collect
struct MyCollectAcceptable_eventCollect_Parms
{
	UObject* sourceObj;
	float count;
};
void IMyCollectAcceptable::Collect(UObject* sourceObj, float count)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Collect instead.");
}
static FName NAME_UMyCollectAcceptable_Collect = FName(TEXT("Collect"));
void IMyCollectAcceptable::Execute_Collect(UObject* O, UObject* sourceObj, float count)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMyCollectAcceptable::StaticClass()));
	MyCollectAcceptable_eventCollect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMyCollectAcceptable_Collect);
	if (Func)
	{
		Parms.sourceObj=sourceObj;
		Parms.count=count;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCollectAcceptable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sourceObj;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::NewProp_sourceObj = { "sourceObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectAcceptable_eventCollect_Parms, sourceObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectAcceptable_eventCollect_Parms, count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::NewProp_sourceObj,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::NewProp_count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyCollectAcceptable, nullptr, "Collect", nullptr, nullptr, Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::PropPointers), sizeof(MyCollectAcceptable_eventCollect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyCollectAcceptable_eventCollect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyCollectAcceptable_Collect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyCollectAcceptable_Collect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMyCollectAcceptable Function Collect

// Begin Interface UMyCollectAcceptable
void UMyCollectAcceptable::StaticRegisterNativesUMyCollectAcceptable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyCollectAcceptable);
UClass* Z_Construct_UClass_UMyCollectAcceptable_NoRegister()
{
	return UMyCollectAcceptable::StaticClass();
}
struct Z_Construct_UClass_UMyCollectAcceptable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MyCollectAcceptable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyCollectAcceptable_Collect, "Collect" }, // 3100119864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMyCollectAcceptable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyCollectAcceptable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCollectAcceptable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyCollectAcceptable_Statics::ClassParams = {
	&UMyCollectAcceptable::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyCollectAcceptable_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyCollectAcceptable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyCollectAcceptable()
{
	if (!Z_Registration_Info_UClass_UMyCollectAcceptable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyCollectAcceptable.OuterSingleton, Z_Construct_UClass_UMyCollectAcceptable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyCollectAcceptable.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<UMyCollectAcceptable>()
{
	return UMyCollectAcceptable::StaticClass();
}
UMyCollectAcceptable::UMyCollectAcceptable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCollectAcceptable);
UMyCollectAcceptable::~UMyCollectAcceptable() {}
// End Interface UMyCollectAcceptable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectAcceptable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyCollectAcceptable, UMyCollectAcceptable::StaticClass, TEXT("UMyCollectAcceptable"), &Z_Registration_Info_UClass_UMyCollectAcceptable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyCollectAcceptable), 2191063211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectAcceptable_h_3339279667(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectAcceptable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectAcceptable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
