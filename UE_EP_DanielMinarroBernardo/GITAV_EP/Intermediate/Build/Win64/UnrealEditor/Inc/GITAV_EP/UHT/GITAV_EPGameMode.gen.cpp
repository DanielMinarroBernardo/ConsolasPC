// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GITAV_EP/GITAV_EPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGITAV_EPGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GITAV_EP_API UClass* Z_Construct_UClass_AGITAV_EPGameMode();
GITAV_EP_API UClass* Z_Construct_UClass_AGITAV_EPGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GITAV_EP();
// End Cross Module References

// Begin Class AGITAV_EPGameMode
void AGITAV_EPGameMode::StaticRegisterNativesAGITAV_EPGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGITAV_EPGameMode);
UClass* Z_Construct_UClass_AGITAV_EPGameMode_NoRegister()
{
	return AGITAV_EPGameMode::StaticClass();
}
struct Z_Construct_UClass_AGITAV_EPGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GITAV_EPGameMode.h" },
		{ "ModuleRelativePath", "GITAV_EPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGITAV_EPGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGITAV_EPGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GITAV_EP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGITAV_EPGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGITAV_EPGameMode_Statics::ClassParams = {
	&AGITAV_EPGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGITAV_EPGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGITAV_EPGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGITAV_EPGameMode()
{
	if (!Z_Registration_Info_UClass_AGITAV_EPGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGITAV_EPGameMode.OuterSingleton, Z_Construct_UClass_AGITAV_EPGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGITAV_EPGameMode.OuterSingleton;
}
template<> GITAV_EP_API UClass* StaticClass<AGITAV_EPGameMode>()
{
	return AGITAV_EPGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGITAV_EPGameMode);
AGITAV_EPGameMode::~AGITAV_EPGameMode() {}
// End Class AGITAV_EPGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGITAV_EPGameMode, AGITAV_EPGameMode::StaticClass, TEXT("AGITAV_EPGameMode"), &Z_Registration_Info_UClass_AGITAV_EPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGITAV_EPGameMode), 2712464806U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPGameMode_h_3498858515(TEXT("/Script/GITAV_EP"),
	Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GITAV_EP_Source_GITAV_EP_GITAV_EPGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
