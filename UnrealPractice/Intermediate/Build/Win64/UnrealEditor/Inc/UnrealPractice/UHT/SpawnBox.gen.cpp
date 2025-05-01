// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPractice/Public/SpawnBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnBox() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ASpawnBox();
UNREALPRACTICE_API UClass* Z_Construct_UClass_ASpawnBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealPractice();
// End Cross Module References

// Begin Class ASpawnBox Function EnableActorSpawning
struct Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics
{
	struct SpawnBox_eventEnableActorSpawning_Parms
	{
		bool enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Change if actors are spawned\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change if actors are spawned" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_enabled_SetBit(void* Obj)
{
	((SpawnBox_eventEnableActorSpawning_Parms*)Obj)->enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpawnBox_eventEnableActorSpawning_Parms), &Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::NewProp_enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBox, nullptr, "EnableActorSpawning", nullptr, nullptr, Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::SpawnBox_eventEnableActorSpawning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::SpawnBox_eventEnableActorSpawning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnBox_EnableActorSpawning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnBox_EnableActorSpawning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnBox::execEnableActorSpawning)
{
	P_GET_UBOOL(Z_Param_enabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableActorSpawning(Z_Param_enabled);
	P_NATIVE_END;
}
// End Class ASpawnBox Function EnableActorSpawning

// Begin Class ASpawnBox Function SpawnActor
struct Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics
{
	struct SpawnBox_eventSpawnActor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n//virtual void Tick(float DeltaTime) override;\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpawnBox_eventSpawnActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpawnBox_eventSpawnActor_Parms), &Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBox, nullptr, "SpawnActor", nullptr, nullptr, Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::SpawnBox_eventSpawnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::SpawnBox_eventSpawnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnBox_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnBox_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnBox::execSpawnActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SpawnActor();
	P_NATIVE_END;
}
// End Class ASpawnBox Function SpawnActor

// Begin Class ASpawnBox Function SpawnActorScheduled
struct Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This needs a UFUNCTION macro because timers need this\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This needs a UFUNCTION macro because timers need this" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBox, nullptr, "SpawnActorScheduled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnBox::execSpawnActorScheduled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActorScheduled();
	P_NATIVE_END;
}
// End Class ASpawnBox Function SpawnActorScheduled

// Begin Class ASpawnBox
void ASpawnBox::StaticRegisterNativesASpawnBox()
{
	UClass* Class = ASpawnBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableActorSpawning", &ASpawnBox::execEnableActorSpawning },
		{ "SpawnActor", &ASpawnBox::execSpawnActor },
		{ "SpawnActorScheduled", &ASpawnBox::execSpawnActorScheduled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnBox);
UClass* Z_Construct_UClass_ASpawnBox_NoRegister()
{
	return ASpawnBox::StaticClass();
}
struct Z_Construct_UClass_ASpawnBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnBox.h" },
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorClassToBeSpawned_MetaData[] = {
		{ "Category", "SpawnBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor class to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor class to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_averageSpawnTime_MetaData[] = {
		{ "Category", "SpawnBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timing parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timing parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_randomSpawnTimeOffset_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawnBox_MetaData[] = {
		{ "Category", "SpawnBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shouldSpawn_MetaData[] = {
		{ "Category", "SpawnBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Box in which we spawn the actors\n" },
#endif
		{ "ModuleRelativePath", "Public/SpawnBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box in which we spawn the actors" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorClassToBeSpawned;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_averageSpawnTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_randomSpawnTimeOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnBox;
	static void NewProp_shouldSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnBox_EnableActorSpawning, "EnableActorSpawning" }, // 805598240
		{ &Z_Construct_UFunction_ASpawnBox_SpawnActor, "SpawnActor" }, // 2050545847
		{ &Z_Construct_UFunction_ASpawnBox_SpawnActorScheduled, "SpawnActorScheduled" }, // 892633788
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_actorClassToBeSpawned = { "actorClassToBeSpawned", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnBox, actorClassToBeSpawned), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorClassToBeSpawned_MetaData), NewProp_actorClassToBeSpawned_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_averageSpawnTime = { "averageSpawnTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnBox, averageSpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_averageSpawnTime_MetaData), NewProp_averageSpawnTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_randomSpawnTimeOffset = { "randomSpawnTimeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnBox, randomSpawnTimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_randomSpawnTimeOffset_MetaData), NewProp_randomSpawnTimeOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_spawnBox = { "spawnBox", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnBox, spawnBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawnBox_MetaData), NewProp_spawnBox_MetaData) };
void Z_Construct_UClass_ASpawnBox_Statics::NewProp_shouldSpawn_SetBit(void* Obj)
{
	((ASpawnBox*)Obj)->shouldSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnBox_Statics::NewProp_shouldSpawn = { "shouldSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASpawnBox), &Z_Construct_UClass_ASpawnBox_Statics::NewProp_shouldSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shouldSpawn_MetaData), NewProp_shouldSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_actorClassToBeSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_averageSpawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_randomSpawnTimeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_spawnBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBox_Statics::NewProp_shouldSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealPractice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnBox_Statics::ClassParams = {
	&ASpawnBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnBox()
{
	if (!Z_Registration_Info_UClass_ASpawnBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnBox.OuterSingleton, Z_Construct_UClass_ASpawnBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnBox.OuterSingleton;
}
template<> UNREALPRACTICE_API UClass* StaticClass<ASpawnBox>()
{
	return ASpawnBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnBox);
ASpawnBox::~ASpawnBox() {}
// End Class ASpawnBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnBox, ASpawnBox::StaticClass, TEXT("ASpawnBox"), &Z_Registration_Info_UClass_ASpawnBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnBox), 1964007185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_2575768749(TEXT("/Script/UnrealPractice"),
	Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
