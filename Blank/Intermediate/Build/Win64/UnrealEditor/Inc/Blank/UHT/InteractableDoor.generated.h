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
enum class EInteractionType : uint8;
struct FHitResult;
#ifdef BLANK_InteractableDoor_generated_h
#error "InteractableDoor.generated.h already included, missing '#pragma once' in InteractableDoor.h"
#endif
#define BLANK_InteractableDoor_generated_h

#define FID_Blank_Source_Blank_Public_InteractableDoor_h_14_DELEGATE \
BLANK_API void FOnDoorMove_DelegateWrapper(const FMulticastScriptDelegate& OnDoorMove, bool bOpened);


#define FID_Blank_Source_Blank_Public_InteractableDoor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(EInteractionType InteractionType); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor); \
	DECLARE_FUNCTION(execUpdateMoveDoor); \
	DECLARE_FUNCTION(execOnBooTriggerOverlap); \
	DECLARE_FUNCTION(execOnDoorTriggerOverlap);


#define FID_Blank_Source_Blank_Public_InteractableDoor_h_19_CALLBACK_WRAPPERS
#define FID_Blank_Source_Blank_Public_InteractableDoor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableDoor(); \
	friend struct Z_Construct_UClass_AInteractableDoor_Statics; \
public: \
	DECLARE_CLASS(AInteractableDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blank"), NO_API) \
	DECLARE_SERIALIZER(AInteractableDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableDoor*>(this); }


#define FID_Blank_Source_Blank_Public_InteractableDoor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractableDoor(AInteractableDoor&&); \
	AInteractableDoor(const AInteractableDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableDoor) \
	NO_API virtual ~AInteractableDoor();


#define FID_Blank_Source_Blank_Public_InteractableDoor_h_16_PROLOG
#define FID_Blank_Source_Blank_Public_InteractableDoor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blank_Source_Blank_Public_InteractableDoor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_InteractableDoor_h_19_CALLBACK_WRAPPERS \
	FID_Blank_Source_Blank_Public_InteractableDoor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_InteractableDoor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLANK_API UClass* StaticClass<class AInteractableDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blank_Source_Blank_Public_InteractableDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
