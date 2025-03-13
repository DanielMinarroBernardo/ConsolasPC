// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PRACTICA0_InteractableDoor_generated_h
#error "InteractableDoor.generated.h already included, missing '#pragma once' in InteractableDoor.h"
#endif
#define PRACTICA0_InteractableDoor_generated_h

#define FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_10_DELEGATE \
PRACTICA0_API void FOnDoorClosed_DelegateWrapper(const FMulticastScriptDelegate& OnDoorClosed);


#define FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_11_DELEGATE \
PRACTICA0_API void FOnDoorMoved_DelegateWrapper(const FMulticastScriptDelegate& OnDoorMoved, bool bOpened);


#define FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateMoveDoor); \
	DECLARE_FUNCTION(execOnDoorExitBeginOverlap); \
	DECLARE_FUNCTION(execOnDoorBeginOverlap);


#define FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableDoor(); \
	friend struct Z_Construct_UClass_AInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractableDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Practica0"), NO_API) \
	DECLARE_SERIALIZER(AInteractableDoor)


#define FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractableDoor(AInteractableDoor&&); \
	AInteractableDoor(const AInteractableDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableDoor) \
	NO_API virtual ~AInteractableDoor();


#define FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_13_PROLOG
#define FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_16_INCLASS_NO_PURE_DECLS \
	FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRACTICA0_API UClass* StaticClass<class AInteractableDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
