// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/RespawnComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnComp() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_URespawnComp();
BLANK_API UClass* Z_Construct_UClass_URespawnComp_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Class URespawnComp Function Respawn
struct Z_Construct_UFunction_URespawnComp_Respawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/RespawnComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URespawnComp_Respawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URespawnComp, nullptr, "Respawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnComp_Respawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_URespawnComp_Respawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URespawnComp_Respawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URespawnComp_Respawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URespawnComp::execRespawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Respawn();
	P_NATIVE_END;
}
// End Class URespawnComp Function Respawn

// Begin Class URespawnComp
void URespawnComp::StaticRegisterNativesURespawnComp()
{
	UClass* Class = URespawnComp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Respawn", &URespawnComp::execRespawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URespawnComp);
UClass* Z_Construct_UClass_URespawnComp_NoRegister()
{
	return URespawnComp::StaticClass();
}
struct Z_Construct_UClass_URespawnComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RespawnComp.h" },
		{ "ModuleRelativePath", "Public/RespawnComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_killZ_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/RespawnComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPos_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/RespawnComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRot_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/RespawnComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_killZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URespawnComp_Respawn, "Respawn" }, // 410746737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawnComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URespawnComp_Statics::NewProp_killZ = { "killZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URespawnComp, killZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_killZ_MetaData), NewProp_killZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URespawnComp_Statics::NewProp_InitialPos = { "InitialPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URespawnComp, InitialPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPos_MetaData), NewProp_InitialPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URespawnComp_Statics::NewProp_InitialRot = { "InitialRot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URespawnComp, InitialRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRot_MetaData), NewProp_InitialRot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URespawnComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnComp_Statics::NewProp_killZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnComp_Statics::NewProp_InitialPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnComp_Statics::NewProp_InitialRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URespawnComp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URespawnComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URespawnComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URespawnComp_Statics::ClassParams = {
	&URespawnComp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URespawnComp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URespawnComp_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URespawnComp_Statics::Class_MetaDataParams), Z_Construct_UClass_URespawnComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URespawnComp()
{
	if (!Z_Registration_Info_UClass_URespawnComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URespawnComp.OuterSingleton, Z_Construct_UClass_URespawnComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URespawnComp.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<URespawnComp>()
{
	return URespawnComp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URespawnComp);
URespawnComp::~URespawnComp() {}
// End Class URespawnComp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URespawnComp, URespawnComp::StaticClass, TEXT("URespawnComp"), &Z_Registration_Info_UClass_URespawnComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URespawnComp), 3844126390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComp_h_112244794(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RespawnComp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
