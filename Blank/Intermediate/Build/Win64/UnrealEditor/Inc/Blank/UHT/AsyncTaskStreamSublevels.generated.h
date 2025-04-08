// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTaskStreamSublevels.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncTaskStreamSublevels;
class UObject;
#ifdef BLANK_AsyncTaskStreamSublevels_generated_h
#error "AsyncTaskStreamSublevels.generated.h already included, missing '#pragma once' in AsyncTaskStreamSublevels.h"
#endif
#define BLANK_AsyncTaskStreamSublevels_generated_h

#define FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_17_DELEGATE \
static void FFROnCompleteLoadDelegate_DelegateWrapper(const FMulticastScriptDelegate& FROnCompleteLoadDelegate);


#define FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnLevelLoaded); \
	DECLARE_FUNCTION(execStreamSublevel);


#define FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskStreamSublevels(); \
	friend struct Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskStreamSublevels, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blank"), NO_API) \
	DECLARE_SERIALIZER(UAsyncTaskStreamSublevels)


#define FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTaskStreamSublevels(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncTaskStreamSublevels(UAsyncTaskStreamSublevels&&); \
	UAsyncTaskStreamSublevels(const UAsyncTaskStreamSublevels&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskStreamSublevels); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskStreamSublevels); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskStreamSublevels) \
	NO_API virtual ~UAsyncTaskStreamSublevels();


#define FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_12_PROLOG
#define FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_15_INCLASS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLANK_API UClass* StaticClass<class UAsyncTaskStreamSublevels>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
