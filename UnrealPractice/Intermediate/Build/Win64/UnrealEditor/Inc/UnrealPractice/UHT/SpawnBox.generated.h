// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPRACTICE_SpawnBox_generated_h
#error "SpawnBox.generated.h already included, missing '#pragma once' in SpawnBox.h"
#endif
#define UNREALPRACTICE_SpawnBox_generated_h

#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnActorScheduled); \
	DECLARE_FUNCTION(execEnableActorSpawning); \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnBox(); \
	friend struct Z_Construct_UClass_ASpawnBox_Statics; \
public: \
	DECLARE_CLASS(ASpawnBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPractice"), NO_API) \
	DECLARE_SERIALIZER(ASpawnBox)


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnBox(ASpawnBox&&); \
	ASpawnBox(const ASpawnBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnBox) \
	NO_API virtual ~ASpawnBox();


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_10_PROLOG
#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPRACTICE_API UClass* StaticClass<class ASpawnBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_SpawnBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
