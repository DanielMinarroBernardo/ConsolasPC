// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practica0/CEUComponents/RelocateCmp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRelocateCmp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PRACTICA0_API UClass* Z_Construct_UClass_URelocateCmp();
PRACTICA0_API UClass* Z_Construct_UClass_URelocateCmp_NoRegister();
UPackage* Z_Construct_UPackage__Script_Practica0();
// End Cross Module References

// Begin Class URelocateCmp
void URelocateCmp::StaticRegisterNativesURelocateCmp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URelocateCmp);
UClass* Z_Construct_UClass_URelocateCmp_NoRegister()
{
	return URelocateCmp::StaticClass();
}
struct Z_Construct_UClass_URelocateCmp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CEUComponents/RelocateCmp.h" },
		{ "ModuleRelativePath", "CEUComponents/RelocateCmp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshTag_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "CEUComponents/RelocateCmp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StaticMeshTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URelocateCmp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URelocateCmp_Statics::NewProp_StaticMeshTag = { "StaticMeshTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateCmp, StaticMeshTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshTag_MetaData), NewProp_StaticMeshTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URelocateCmp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateCmp_Statics::NewProp_StaticMeshTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateCmp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URelocateCmp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Practica0,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateCmp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URelocateCmp_Statics::ClassParams = {
	&URelocateCmp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URelocateCmp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URelocateCmp_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateCmp_Statics::Class_MetaDataParams), Z_Construct_UClass_URelocateCmp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URelocateCmp()
{
	if (!Z_Registration_Info_UClass_URelocateCmp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URelocateCmp.OuterSingleton, Z_Construct_UClass_URelocateCmp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URelocateCmp.OuterSingleton;
}
template<> PRACTICA0_API UClass* StaticClass<URelocateCmp>()
{
	return URelocateCmp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URelocateCmp);
URelocateCmp::~URelocateCmp() {}
// End Class URelocateCmp

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_CEUComponents_RelocateCmp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URelocateCmp, URelocateCmp::StaticClass, TEXT("URelocateCmp"), &Z_Registration_Info_UClass_URelocateCmp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URelocateCmp), 2371150317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_CEUComponents_RelocateCmp_h_1664959411(TEXT("/Script/Practica0"),
	Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_CEUComponents_RelocateCmp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_CEUComponents_RelocateCmp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
