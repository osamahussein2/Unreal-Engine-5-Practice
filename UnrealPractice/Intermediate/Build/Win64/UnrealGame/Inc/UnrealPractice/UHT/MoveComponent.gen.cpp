// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/MoveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UMoveComponent();
UNREALPRACTICE_API UClass* Z_Construct_UClass_UMoveComponent_NoRegister();
UNREALPRACTICE_API UFunction* Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Delegate FOnMoveComponentReachEndPointSignature
struct Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics
{
	struct _Script_UnrealPractice_eventOnMoveComponentReachEndPointSignature_Parms
	{
		bool IsTopEndpoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsTopEndpoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTopEndpoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::NewProp_IsTopEndpoint_SetBit(void* Obj)
{
	((_Script_UnrealPractice_eventOnMoveComponentReachEndPointSignature_Parms*)Obj)->IsTopEndpoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::NewProp_IsTopEndpoint = { "IsTopEndpoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UnrealPractice_eventOnMoveComponentReachEndPointSignature_Parms), &Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::NewProp_IsTopEndpoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::NewProp_IsTopEndpoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealPractice, nullptr, "OnMoveComponentReachEndPointSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::_Script_UnrealPractice_eventOnMoveComponentReachEndPointSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::_Script_UnrealPractice_eventOnMoveComponentReachEndPointSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMoveComponentReachEndPointSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMoveComponentReachEndPointSignature, bool IsTopEndpoint)
{
	struct _Script_UnrealPractice_eventOnMoveComponentReachEndPointSignature_Parms
	{
		bool IsTopEndpoint;
	};
	_Script_UnrealPractice_eventOnMoveComponentReachEndPointSignature_Parms Parms;
	Parms.IsTopEndpoint=IsTopEndpoint ? true : false;
	OnMoveComponentReachEndPointSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMoveComponentReachEndPointSignature

// Begin Class UMoveComponent Function EnableMovement
struct Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics
{
	struct MoveComponent_eventEnableMovement_Parms
	{
		bool shouldMove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_shouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_shouldMove_SetBit(void* Obj)
{
	((MoveComponent_eventEnableMovement_Parms*)Obj)->shouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_shouldMove = { "shouldMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoveComponent_eventEnableMovement_Parms), &Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_shouldMove_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::NewProp_shouldMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "EnableMovement", nullptr, nullptr, Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::MoveComponent_eventEnableMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::MoveComponent_eventEnableMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoveComponent_EnableMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_EnableMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoveComponent::execEnableMovement)
{
	P_GET_UBOOL(Z_Param_shouldMove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableMovement(Z_Param_shouldMove);
	P_NATIVE_END;
}
// End Class UMoveComponent Function EnableMovement

// Begin Class UMoveComponent Function OnReachedEnd
struct MoveComponent_eventOnReachedEnd_Parms
{
	bool IsTopEndpoint;
};
static FName NAME_UMoveComponent_OnReachedEnd = FName(TEXT("OnReachedEnd"));
void UMoveComponent::OnReachedEnd(bool IsTopEndpoint)
{
	MoveComponent_eventOnReachedEnd_Parms Parms;
	Parms.IsTopEndpoint=IsTopEndpoint ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UMoveComponent_OnReachedEnd),&Parms);
}
struct Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsTopEndpoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTopEndpoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::NewProp_IsTopEndpoint_SetBit(void* Obj)
{
	((MoveComponent_eventOnReachedEnd_Parms*)Obj)->IsTopEndpoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::NewProp_IsTopEndpoint = { "IsTopEndpoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoveComponent_eventOnReachedEnd_Parms), &Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::NewProp_IsTopEndpoint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::NewProp_IsTopEndpoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "OnReachedEnd", nullptr, nullptr, Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::PropPointers), sizeof(MoveComponent_eventOnReachedEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(MoveComponent_eventOnReachedEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoveComponent_OnReachedEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_OnReachedEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMoveComponent Function OnReachedEnd

// Begin Class UMoveComponent Function ResetMovement
struct Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "ResetMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMoveComponent_ResetMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_ResetMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoveComponent::execResetMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMovement();
	P_NATIVE_END;
}
// End Class UMoveComponent Function ResetMovement

// Begin Class UMoveComponent Function SetMoveDirection
struct Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics
{
	struct MoveComponent_eventSetMoveDirection_Parms
	{
		int32 Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveComponent_eventSetMoveDirection_Parms, Direction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveComponent, nullptr, "SetMoveDirection", nullptr, nullptr, Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::MoveComponent_eventSetMoveDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::MoveComponent_eventSetMoveDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoveComponent_SetMoveDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveComponent_SetMoveDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoveComponent::execSetMoveDirection)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveDirection(Z_Param_Direction);
	P_NATIVE_END;
}
// End Class UMoveComponent Function SetMoveDirection

// Begin Class UMoveComponent
void UMoveComponent::StaticRegisterNativesUMoveComponent()
{
	UClass* Class = UMoveComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableMovement", &UMoveComponent::execEnableMovement },
		{ "ResetMovement", &UMoveComponent::execResetMovement },
		{ "SetMoveDirection", &UMoveComponent::execSetMoveDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveComponent);
UClass* Z_Construct_UClass_UMoveComponent_NoRegister()
{
	return UMoveComponent::StaticClass();
}
struct Z_Construct_UClass_UMoveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MoveComponent.h" },
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveOffset_MetaData[] = {
		{ "Category", "MoveComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parameter\n" },
#endif
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parameter" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "MoveComponent" },
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_moveEnable_MetaData[] = {
		{ "Category", "MoveComponent" },
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndpointReached_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On Extream reached event\n" },
#endif
		{ "ModuleRelativePath", "Public/MoveComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Extream reached event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_moveOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static void NewProp_moveEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_moveEnable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndpointReached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoveComponent_EnableMovement, "EnableMovement" }, // 1249270748
		{ &Z_Construct_UFunction_UMoveComponent_OnReachedEnd, "OnReachedEnd" }, // 2443638460
		{ &Z_Construct_UFunction_UMoveComponent_ResetMovement, "ResetMovement" }, // 1658241916
		{ &Z_Construct_UFunction_UMoveComponent_SetMoveDirection, "SetMoveDirection" }, // 3083914058
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_moveOffset = { "moveOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, moveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveOffset_MetaData), NewProp_moveOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
void Z_Construct_UClass_UMoveComponent_Statics::NewProp_moveEnable_SetBit(void* Obj)
{
	((UMoveComponent*)Obj)->moveEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_moveEnable = { "moveEnable", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveComponent), &Z_Construct_UClass_UMoveComponent_Statics::NewProp_moveEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_moveEnable_MetaData), NewProp_moveEnable_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoveComponent_Statics::NewProp_OnEndpointReached = { "OnEndpointReached", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveComponent, OnEndpointReached), Z_Construct_UDelegateFunction_UnrealPractice_OnMoveComponentReachEndPointSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndpointReached_MetaData), NewProp_OnEndpointReached_MetaData) }; // 2843636677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_moveOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_moveEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveComponent_Statics::NewProp_OnEndpointReached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveComponent_Statics::ClassParams = {
	&UMoveComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoveComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoveComponent()
{
	if (!Z_Registration_Info_UClass_UMoveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveComponent.OuterSingleton, Z_Construct_UClass_UMoveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoveComponent.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<UMoveComponent>()
{
	return UMoveComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveComponent);
UMoveComponent::~UMoveComponent() {}
// End Class UMoveComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MoveComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoveComponent, UMoveComponent::StaticClass, TEXT("UMoveComponent"), &Z_Registration_Info_UClass_UMoveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveComponent), 739455406U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MoveComponent_h_125837812(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MoveComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MoveComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
