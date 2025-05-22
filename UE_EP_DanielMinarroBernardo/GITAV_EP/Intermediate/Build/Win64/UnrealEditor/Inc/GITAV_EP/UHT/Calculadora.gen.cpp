// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GITAV_EP/Public/Calculadora.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalculadora() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GITAV_EP_API UClass* Z_Construct_UClass_ACalculadora();
GITAV_EP_API UClass* Z_Construct_UClass_ACalculadora_NoRegister();
UPackage* Z_Construct_UPackage__Script_GITAV_EP();
// End Cross Module References

// Begin Class ACalculadora
void ACalculadora::StaticRegisterNativesACalculadora()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACalculadora);
UClass* Z_Construct_UClass_ACalculadora_NoRegister()
{
	return ACalculadora::StaticClass();
}
struct Z_Construct_UClass_ACalculadora_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Calculadora.h" },
		{ "ModuleRelativePath", "Public/Calculadora.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACalculadora>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACalculadora_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GITAV_EP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACalculadora_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACalculadora_Statics::ClassParams = {
	&ACalculadora::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACalculadora_Statics::Class_MetaDataParams), Z_Construct_UClass_ACalculadora_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACalculadora()
{
	if (!Z_Registration_Info_UClass_ACalculadora.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACalculadora.OuterSingleton, Z_Construct_UClass_ACalculadora_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACalculadora.OuterSingleton;
}
template<> GITAV_EP_API UClass* StaticClass<ACalculadora>()
{
	return ACalculadora::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACalculadora);
ACalculadora::~ACalculadora() {}
// End Class ACalculadora

// Begin Registration
struct Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_Public_Calculadora_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACalculadora, ACalculadora::StaticClass, TEXT("ACalculadora"), &Z_Registration_Info_UClass_ACalculadora, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACalculadora), 451774996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_Public_Calculadora_h_805569851(TEXT("/Script/GITAV_EP"),
	Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_Public_Calculadora_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_Public_Calculadora_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
