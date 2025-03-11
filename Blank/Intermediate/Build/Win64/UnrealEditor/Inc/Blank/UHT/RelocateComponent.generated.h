// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RelocateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLANK_RelocateComponent_generated_h
#error "RelocateComponent.generated.h already included, missing '#pragma once' in RelocateComponent.h"
#endif
#define BLANK_RelocateComponent_generated_h

#define FID_Blank_Source_Blank_Public_RelocateComponent_h_11_DELEGATE \
BLANK_API void FOnFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFinished);


#define FID_Blank_Source_Blank_Public_RelocateComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveToEnd); \
	DECLARE_FUNCTION(execMoveToStart);


#define FID_Blank_Source_Blank_Public_RelocateComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURelocateComponent(); \
	friend struct Z_Construct_UClass_URelocateComponent_Statics; \
public: \
	DECLARE_CLASS(URelocateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blank"), NO_API) \
	DECLARE_SERIALIZER(URelocateComponent)


#define FID_Blank_Source_Blank_Public_RelocateComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URelocateComponent(URelocateComponent&&); \
	URelocateComponent(const URelocateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URelocateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URelocateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URelocateComponent) \
	NO_API virtual ~URelocateComponent();


#define FID_Blank_Source_Blank_Public_RelocateComponent_h_13_PROLOG
#define FID_Blank_Source_Blank_Public_RelocateComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blank_Source_Blank_Public_RelocateComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_RelocateComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_RelocateComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLANK_API UClass* StaticClass<class URelocateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blank_Source_Blank_Public_RelocateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
