// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GITAVLevelScriptActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLANK_GITAVLevelScriptActor_generated_h
#error "GITAVLevelScriptActor.generated.h already included, missing '#pragma once' in GITAVLevelScriptActor.h"
#endif
#define BLANK_GITAVLevelScriptActor_generated_h

#define FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLevelLoaded); \
	DECLARE_FUNCTION(execLoadTargetLevel);


#define FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGITAVLevelScriptActor(); \
	friend struct Z_Construct_UClass_AGITAVLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(AGITAVLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blank"), NO_API) \
	DECLARE_SERIALIZER(AGITAVLevelScriptActor)


#define FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGITAVLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGITAVLevelScriptActor(AGITAVLevelScriptActor&&); \
	AGITAVLevelScriptActor(const AGITAVLevelScriptActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGITAVLevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGITAVLevelScriptActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGITAVLevelScriptActor) \
	NO_API virtual ~AGITAVLevelScriptActor();


#define FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_12_PROLOG
#define FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLANK_API UClass* StaticClass<class AGITAVLevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
