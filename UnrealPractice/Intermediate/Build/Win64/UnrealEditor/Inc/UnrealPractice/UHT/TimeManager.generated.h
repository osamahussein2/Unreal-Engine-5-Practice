// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALPRACTICE_TimeManager_generated_h
#error "TimeManager.generated.h already included, missing '#pragma once' in TimeManager.h"
#endif
#define UNREALPRACTICE_TimeManager_generated_h

#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndTimeReverse); \
	DECLARE_FUNCTION(execBeginTimeReverse); \
	DECLARE_FUNCTION(execGetTimeFactor);


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeManager(); \
	friend struct Z_Construct_UClass_ATimeManager_Statics; \
public: \
	DECLARE_CLASS(ATimeManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPractice"), NO_API) \
	DECLARE_SERIALIZER(ATimeManager)


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATimeManager(ATimeManager&&); \
	ATimeManager(const ATimeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimeManager) \
	NO_API virtual ~ATimeManager();


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_9_PROLOG
#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPRACTICE_API UClass* StaticClass<class ATimeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_TimeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
