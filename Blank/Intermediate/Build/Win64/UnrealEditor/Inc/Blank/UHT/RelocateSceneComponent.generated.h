// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RelocateSceneComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERelocationState : uint8;
#ifdef BLANK_RelocateSceneComponent_generated_h
#error "RelocateSceneComponent.generated.h already included, missing '#pragma once' in RelocateSceneComponent.h"
#endif
#define BLANK_RelocateSceneComponent_generated_h

#define FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execGoToNextState); \
	DECLARE_FUNCTION(execTeleportToEnd); \
	DECLARE_FUNCTION(execTeleportToStart); \
	DECLARE_FUNCTION(execMoveToEnd); \
	DECLARE_FUNCTION(execMoveToStart);


#define FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURelocateSceneComponent(); \
	friend struct Z_Construct_UClass_URelocateSceneComponent_Statics; \
public: \
	DECLARE_CLASS(URelocateSceneComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blank"), NO_API) \
	DECLARE_SERIALIZER(URelocateSceneComponent)


#define FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URelocateSceneComponent(URelocateSceneComponent&&); \
	URelocateSceneComponent(const URelocateSceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URelocateSceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URelocateSceneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URelocateSceneComponent) \
	NO_API virtual ~URelocateSceneComponent();


#define FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_15_PROLOG
#define FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLANK_API UClass* StaticClass<class URelocateSceneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blank_Source_Blank_Public_RelocateSceneComponent_h


#define FOREACH_ENUM_ERELOCATIONSTATE(op) \
	op(ERelocationState::StartState) \
	op(ERelocationState::EndState) \
	op(ERelocationState::MovingToStart) \
	op(ERelocationState::MovingToEnd) 

enum class ERelocationState : uint8;
template<> struct TIsUEnumClass<ERelocationState> { enum { Value = true }; };
template<> BLANK_API UEnum* StaticEnum<ERelocationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
