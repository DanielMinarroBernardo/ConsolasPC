// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInteractionType : uint8;
#ifdef BLANK_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define BLANK_InteractionInterface_generated_h

#define FID_Blank_Source_Blank_Public_InteractionInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(EInteractionType InteractionType) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_Blank_Source_Blank_Public_InteractionInterface_h_20_CALLBACK_WRAPPERS
#define FID_Blank_Source_Blank_Public_InteractionInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLANK_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionInterface(UInteractionInterface&&); \
	UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLANK_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	BLANK_API virtual ~UInteractionInterface();


#define FID_Blank_Source_Blank_Public_InteractionInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Blank"), BLANK_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_Blank_Source_Blank_Public_InteractionInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Blank_Source_Blank_Public_InteractionInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Blank_Source_Blank_Public_InteractionInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Blank_Source_Blank_Public_InteractionInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_Interact(UObject* O, EInteractionType InteractionType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Blank_Source_Blank_Public_InteractionInterface_h_17_PROLOG
#define FID_Blank_Source_Blank_Public_InteractionInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blank_Source_Blank_Public_InteractionInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_InteractionInterface_h_20_CALLBACK_WRAPPERS \
	FID_Blank_Source_Blank_Public_InteractionInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLANK_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blank_Source_Blank_Public_InteractionInterface_h


#define FOREACH_ENUM_EINTERACTIONTYPE(op) \
	op(EInteractionType::Open) \
	op(EInteractionType::Close) 

enum class EInteractionType : uint8;
template<> struct TIsUEnumClass<EInteractionType> { enum { Value = true }; };
template<> BLANK_API UEnum* StaticEnum<EInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
