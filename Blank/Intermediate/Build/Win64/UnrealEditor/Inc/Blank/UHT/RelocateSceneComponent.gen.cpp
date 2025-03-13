// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/RelocateSceneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRelocateSceneComponent() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_URelocateSceneComponent();
BLANK_API UClass* Z_Construct_UClass_URelocateSceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Class URelocateSceneComponent
void URelocateSceneComponent::StaticRegisterNativesURelocateSceneComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URelocateSceneComponent);
UClass* Z_Construct_UClass_URelocateSceneComponent_NoRegister()
{
	return URelocateSceneComponent::StaticClass();
}
struct Z_Construct_UClass_URelocateSceneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "RelocateSceneComponent.h" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URelocateSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URelocateSceneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateSceneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URelocateSceneComponent_Statics::ClassParams = {
	&URelocateSceneComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URelocateSceneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URelocateSceneComponent()
{
	if (!Z_Registration_Info_UClass_URelocateSceneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URelocateSceneComponent.OuterSingleton, Z_Construct_UClass_URelocateSceneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URelocateSceneComponent.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<URelocateSceneComponent>()
{
	return URelocateSceneComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URelocateSceneComponent);
URelocateSceneComponent::~URelocateSceneComponent() {}
// End Class URelocateSceneComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URelocateSceneComponent, URelocateSceneComponent::StaticClass, TEXT("URelocateSceneComponent"), &Z_Registration_Info_UClass_URelocateSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URelocateSceneComponent), 2327978465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_538089647(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
