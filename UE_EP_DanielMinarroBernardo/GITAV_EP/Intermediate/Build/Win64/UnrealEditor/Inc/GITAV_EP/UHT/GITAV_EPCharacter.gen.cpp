// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GITAV_EP/GITAV_EPCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGITAV_EPCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
GITAV_EP_API UClass* Z_Construct_UClass_AGITAV_EPCharacter();
GITAV_EP_API UClass* Z_Construct_UClass_AGITAV_EPCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GITAV_EP();
// End Cross Module References

// Begin Class AGITAV_EPCharacter
void AGITAV_EPCharacter::StaticRegisterNativesAGITAV_EPCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGITAV_EPCharacter);
UClass* Z_Construct_UClass_AGITAV_EPCharacter_NoRegister()
{
	return AGITAV_EPCharacter::StaticClass();
}
struct Z_Construct_UClass_AGITAV_EPCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GITAV_EPCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "GITAV_EPCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GITAV_EPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GITAV_EPCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGITAV_EPCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGITAV_EPCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGITAV_EPCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGITAV_EPCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGITAV_EPCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGITAV_EPCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGITAV_EPCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGITAV_EPCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGITAV_EPCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGITAV_EPCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GITAV_EP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGITAV_EPCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGITAV_EPCharacter_Statics::ClassParams = {
	&AGITAV_EPCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGITAV_EPCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGITAV_EPCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGITAV_EPCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGITAV_EPCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGITAV_EPCharacter()
{
	if (!Z_Registration_Info_UClass_AGITAV_EPCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGITAV_EPCharacter.OuterSingleton, Z_Construct_UClass_AGITAV_EPCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGITAV_EPCharacter.OuterSingleton;
}
template<> GITAV_EP_API UClass* StaticClass<AGITAV_EPCharacter>()
{
	return AGITAV_EPCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGITAV_EPCharacter);
AGITAV_EPCharacter::~AGITAV_EPCharacter() {}
// End Class AGITAV_EPCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGITAV_EPCharacter, AGITAV_EPCharacter::StaticClass, TEXT("AGITAV_EPCharacter"), &Z_Registration_Info_UClass_AGITAV_EPCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGITAV_EPCharacter), 407886180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPCharacter_h_1372914800(TEXT("/Script/GITAV_EP"),
	Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
