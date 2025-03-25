// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RespawnComp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLANK_RespawnComp_generated_h
#error "RespawnComp.generated.h already included, missing '#pragma once' in RespawnComp.h"
#endif
#define BLANK_RespawnComp_generated_h

#define FID_Blank_Source_Blank_Public_RespawnComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRespawn);


#define FID_Blank_Source_Blank_Public_RespawnComp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURespawnComp(); \
	friend struct Z_Construct_UClass_URespawnComp_Statics; \
public: \
	DECLARE_CLASS(URespawnComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blank"), NO_API) \
	DECLARE_SERIALIZER(URespawnComp)


#define FID_Blank_Source_Blank_Public_RespawnComp_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URespawnComp(URespawnComp&&); \
	URespawnComp(const URespawnComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URespawnComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URespawnComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URespawnComp) \
	NO_API virtual ~URespawnComp();


#define FID_Blank_Source_Blank_Public_RespawnComp_h_10_PROLOG
#define FID_Blank_Source_Blank_Public_RespawnComp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blank_Source_Blank_Public_RespawnComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_RespawnComp_h_13_INCLASS_NO_PURE_DECLS \
	FID_Blank_Source_Blank_Public_RespawnComp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLANK_API UClass* StaticClass<class URespawnComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blank_Source_Blank_Public_RespawnComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
