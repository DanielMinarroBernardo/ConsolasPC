// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/MyActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponent() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_UMyActorComponent();
BLANK_API UClass* Z_Construct_UClass_UMyActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Class UMyActorComponent
void UMyActorComponent::StaticRegisterNativesUMyActorComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyActorComponent);
UClass* Z_Construct_UClass_UMyActorComponent_NoRegister()
{
	return UMyActorComponent::StaticClass();
}
struct Z_Construct_UClass_UMyActorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponent.h" },
		{ "ModuleRelativePath", "Public/MyActorComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent_Statics::ClassParams = {
	&UMyActorComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyActorComponent()
{
	if (!Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton, Z_Construct_UClass_UMyActorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<UMyActorComponent>()
{
	return UMyActorComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent);
UMyActorComponent::~UMyActorComponent() {}
// End Class UMyActorComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_MyActorComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyActorComponent, UMyActorComponent::StaticClass, TEXT("UMyActorComponent"), &Z_Registration_Info_UClass_UMyActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyActorComponent), 412527424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_MyActorComponent_h_3143121662(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_MyActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_MyActorComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
