// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/RespawnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnComponent() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_ARespawnComponent();
BLANK_API UClass* Z_Construct_UClass_ARespawnComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Class ARespawnComponent
void ARespawnComponent::StaticRegisterNativesARespawnComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARespawnComponent);
UClass* Z_Construct_UClass_ARespawnComponent_NoRegister()
{
	return ARespawnComponent::StaticClass();
}
struct Z_Construct_UClass_ARespawnComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RespawnComponent.h" },
		{ "ModuleRelativePath", "Public/RespawnComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawnComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARespawnComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARespawnComponent_Statics::ClassParams = {
	&ARespawnComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ARespawnComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARespawnComponent()
{
	if (!Z_Registration_Info_UClass_ARespawnComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARespawnComponent.OuterSingleton, Z_Construct_UClass_ARespawnComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARespawnComponent.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<ARespawnComponent>()
{
	return ARespawnComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawnComponent);
ARespawnComponent::~ARespawnComponent() {}
// End Class ARespawnComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARespawnComponent, ARespawnComponent::StaticClass, TEXT("ARespawnComponent"), &Z_Registration_Info_UClass_ARespawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARespawnComponent), 485993535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComponent_h_2449272554(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
