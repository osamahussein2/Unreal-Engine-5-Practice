// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCollectibleActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UNREALPRACTICE_MyCollectibleActor_generated_h
#error "MyCollectibleActor.generated.h already included, missing '#pragma once' in MyCollectibleActor.h"
#endif
#define UNREALPRACTICE_MyCollectibleActor_generated_h

#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execJump);


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCollectibleActor(); \
	friend struct Z_Construct_UClass_AMyCollectibleActor_Statics; \
public: \
	DECLARE_CLASS(AMyCollectibleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealPractice"), NO_API) \
	DECLARE_SERIALIZER(AMyCollectibleActor)


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCollectibleActor(AMyCollectibleActor&&); \
	AMyCollectibleActor(const AMyCollectibleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCollectibleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCollectibleActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCollectibleActor) \
	NO_API virtual ~AMyCollectibleActor();


#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_14_PROLOG
#define FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPRACTICE_API UClass* StaticClass<class AMyCollectibleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_osama_Downloads_Unreal_Engine_5_Practice_UnrealPractice_Source_UnrealPractice_Public_MyCollectibleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
