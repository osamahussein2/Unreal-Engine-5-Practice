// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/TimepointBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimepointBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UTimepointBase();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UTimepointBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class UTimepointBase Function Interpolate
struct TimepointBase_eventInterpolate_Parms
{
	const UTimepointBase* other;
	float distance;
	UTimepointBase* ReturnValue;

	/** Constructor, initializes return property only **/
	TimepointBase_eventInterpolate_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UTimepointBase_Interpolate = FName(TEXT("Interpolate"));
UTimepointBase* UTimepointBase::Interpolate(const UTimepointBase* other, float distance)
{
	TimepointBase_eventInterpolate_Parms Parms;
	Parms.other=other;
	Parms.distance=distance;
	ProcessEvent(FindFunctionChecked(NAME_UTimepointBase_Interpolate),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTimepointBase_Interpolate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimepointBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_other;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_distance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::NewProp_other = { "other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimepointBase_eventInterpolate_Parms, other), Z_Construct_UClass_UTimepointBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_other_MetaData), NewProp_other_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimepointBase_eventInterpolate_Parms, distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimepointBase_eventInterpolate_Parms, ReturnValue), Z_Construct_UClass_UTimepointBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::NewProp_other,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::NewProp_distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimepointBase, nullptr, "Interpolate", nullptr, nullptr, Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::PropPointers), sizeof(TimepointBase_eventInterpolate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::Function_MetaDataParams) };
static_assert(sizeof(TimepointBase_eventInterpolate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimepointBase_Interpolate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimepointBase_Interpolate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimepointBase::execInterpolate)
{
	P_GET_OBJECT(UTimepointBase,Z_Param_other);
	P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTimepointBase**)Z_Param__Result=P_THIS->Interpolate_Implementation(Z_Param_other,Z_Param_distance);
	P_NATIVE_END;
}
// End Class UTimepointBase Function Interpolate

// Begin Class UTimepointBase
void UTimepointBase::StaticRegisterNativesUTimepointBase()
{
	UClass* Class = UTimepointBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interpolate", &UTimepointBase::execInterpolate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimepointBase);
UClass* Z_Construct_UClass_UTimepointBase_NoRegister()
{
	return UTimepointBase::StaticClass();
}
struct Z_Construct_UClass_UTimepointBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "TimepointBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TimepointBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[] = {
		{ "Category", "TimepointBase" },
		{ "ModuleRelativePath", "Public/TimepointBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimepointBase_Interpolate, "Interpolate" }, // 2400090674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimepointBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimepointBase_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimepointBase, time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_time_MetaData), NewProp_time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimepointBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimepointBase_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimepointBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimepointBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimepointBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimepointBase_Statics::ClassParams = {
	&UTimepointBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimepointBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimepointBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimepointBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimepointBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimepointBase()
{
	if (!Z_Registration_Info_UClass_UTimepointBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimepointBase.OuterSingleton, Z_Construct_UClass_UTimepointBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimepointBase.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<UTimepointBase>()
{
	return UTimepointBase::StaticClass();
}
UTimepointBase::UTimepointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimepointBase);
UTimepointBase::~UTimepointBase() {}
// End Class UTimepointBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimepointBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimepointBase, UTimepointBase::StaticClass, TEXT("UTimepointBase"), &Z_Registration_Info_UClass_UTimepointBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimepointBase), 3052464129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimepointBase_h_421328001(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimepointBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimepointBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
