// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePractica0_init() {}
	PRACTICA0_API UFunction* Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature();
	PRACTICA0_API UFunction* Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Practica0;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Practica0()
	{
		if (!Z_Registration_Info_UPackage__Script_Practica0.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Practica0",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0A762351,
				0x89810E29,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Practica0.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Practica0.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Practica0(Z_Construct_UPackage__Script_Practica0, TEXT("/Script/Practica0"), Z_Registration_Info_UPackage__Script_Practica0, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0A762351, 0x89810E29));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
