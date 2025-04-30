// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/MyCollectibleActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCollectibleActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UNREALPRACTICE_API UClass* Z_Construct_UClass_AMyCollectibleActor();
UNREALPRACTICE_API UClass* Z_Construct_UClass_AMyCollectibleActor_NoRegister();
UNREALPRACTICE_API UFunction* Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Delegate FOnJumpTriggerSignature
struct Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics
{
	struct _Script_UnrealPractice_eventOnJumpTriggerSignature_Parms
	{
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealPractice_eventOnJumpTriggerSignature_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealPractice_eventOnJumpTriggerSignature_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::NewProp_OtherComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealPractice, nullptr, "OnJumpTriggerSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::_Script_UnrealPractice_eventOnJumpTriggerSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::_Script_UnrealPractice_eventOnJumpTriggerSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJumpTriggerSignature_DelegateWrapper(const FMulticastScriptDelegate& OnJumpTriggerSignature, AActor* OtherActor, UPrimitiveComponent* OtherComp)
{
	struct _Script_UnrealPractice_eventOnJumpTriggerSignature_Parms
	{
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
	};
	_Script_UnrealPractice_eventOnJumpTriggerSignature_Parms Parms;
	Parms.OtherActor=OtherActor;
	Parms.OtherComp=OtherComp;
	OnJumpTriggerSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJumpTriggerSignature

// Begin Class AMyCollectibleActor Function Jump
struct Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics
{
	struct MyCollectibleActor_eventJump_Parms
	{
		float velocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectibleActor_eventJump_Parms, velocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::NewProp_velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCollectibleActor, nullptr, "Jump", nullptr, nullptr, Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::MyCollectibleActor_eventJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::MyCollectibleActor_eventJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCollectibleActor_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCollectibleActor_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCollectibleActor::execJump)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_velocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Jump(Z_Param_velocity);
	P_NATIVE_END;
}
// End Class AMyCollectibleActor Function Jump

// Begin Class AMyCollectibleActor Function OnComponentBeginOverlap
struct Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics
{
	struct MyCollectibleActor_eventOnComponentBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when other actors collide hits the collider\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when other actors collide hits the collider" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectibleActor_eventOnComponentBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectibleActor_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectibleActor_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectibleActor_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MyCollectibleActor_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyCollectibleActor_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCollectibleActor_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCollectibleActor, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::MyCollectibleActor_eventOnComponentBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::MyCollectibleActor_eventOnComponentBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCollectibleActor::execOnComponentBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AMyCollectibleActor Function OnComponentBeginOverlap

// Begin Class AMyCollectibleActor
void AMyCollectibleActor::StaticRegisterNativesAMyCollectibleActor()
{
	UClass* Class = AMyCollectibleActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Jump", &AMyCollectibleActor::execJump },
		{ "OnComponentBeginOverlap", &AMyCollectibleActor::execOnComponentBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCollectibleActor);
UClass* Z_Construct_UClass_AMyCollectibleActor_NoRegister()
{
	return AMyCollectibleActor::StaticClass();
}
struct Z_Construct_UClass_AMyCollectibleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCollectibleActor.h" },
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lifetime_MetaData[] = {
		{ "Category", "MyCollectibleActor" },
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "MyCollectibleActor" },
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_triggerClass_MetaData[] = {
		{ "Category", "MyCollectibleActor" },
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_staticMesh_MetaData[] = {
		{ "Category", "MyCollectibleActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static mesh for rendering\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh for rendering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_boxCollision_MetaData[] = {
		{ "Category", "MyCollectibleActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_onJumpTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCollectibleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FClassPropertyParams NewProp_triggerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_boxCollision;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onJumpTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCollectibleActor_Jump, "Jump" }, // 3441017658
		{ &Z_Construct_UFunction_AMyCollectibleActor_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 4207593341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCollectibleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectibleActor, lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lifetime_MetaData), NewProp_lifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectibleActor, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_triggerClass = { "triggerClass", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectibleActor, triggerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_triggerClass_MetaData), NewProp_triggerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectibleActor, staticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_staticMesh_MetaData), NewProp_staticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_boxCollision = { "boxCollision", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectibleActor, boxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_boxCollision_MetaData), NewProp_boxCollision_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_onJumpTrigger = { "onJumpTrigger", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCollectibleActor, onJumpTrigger), Z_Construct_UDelegateFunction_UnrealPractice_OnJumpTriggerSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_onJumpTrigger_MetaData), NewProp_onJumpTrigger_MetaData) }; // 2846220206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCollectibleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_triggerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_staticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_boxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCollectibleActor_Statics::NewProp_onJumpTrigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectibleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCollectibleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectibleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCollectibleActor_Statics::ClassParams = {
	&AMyCollectibleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCollectibleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectibleActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCollectibleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCollectibleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCollectibleActor()
{
	if (!Z_Registration_Info_UClass_AMyCollectibleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCollectibleActor.OuterSingleton, Z_Construct_UClass_AMyCollectibleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCollectibleActor.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<AMyCollectibleActor>()
{
	return AMyCollectibleActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCollectibleActor);
AMyCollectibleActor::~AMyCollectibleActor() {}
// End Class AMyCollectibleActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCollectibleActor, AMyCollectibleActor::StaticClass, TEXT("AMyCollectibleActor"), &Z_Registration_Info_UClass_AMyCollectibleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCollectibleActor), 2068072550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_208476236(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
