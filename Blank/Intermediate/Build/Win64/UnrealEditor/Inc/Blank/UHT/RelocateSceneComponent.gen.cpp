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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Class URelocateSceneComponent Function MoveToEnd
struct Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateSceneComponent, nullptr, "MoveToEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateSceneComponent::execMoveToEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToEnd();
	P_NATIVE_END;
}
// End Class URelocateSceneComponent Function MoveToEnd

// Begin Class URelocateSceneComponent Function MoveToStart
struct Z_Construct_UFunction_URelocateSceneComponent_MoveToStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateSceneComponent_MoveToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateSceneComponent, nullptr, "MoveToStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_MoveToStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateSceneComponent_MoveToStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URelocateSceneComponent_MoveToStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateSceneComponent_MoveToStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateSceneComponent::execMoveToStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToStart();
	P_NATIVE_END;
}
// End Class URelocateSceneComponent Function MoveToStart

// Begin Class URelocateSceneComponent
void URelocateSceneComponent::StaticRegisterNativesURelocateSceneComponent()
{
	UClass* Class = URelocateSceneComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveToEnd", &URelocateSceneComponent::execMoveToEnd },
		{ "MoveToStart", &URelocateSceneComponent::execMoveToStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalRotation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalLocation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd, "MoveToEnd" }, // 1846625850
		{ &Z_Construct_UFunction_URelocateSceneComponent_MoveToStart, "MoveToStart" }, // 2368989995
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URelocateSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRotation_MetaData), NewProp_InitialRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_FinalRotation = { "FinalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, FinalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalRotation_MetaData), NewProp_FinalRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLocation_MetaData), NewProp_InitialLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_FinalLocation = { "FinalLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, FinalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalLocation_MetaData), NewProp_FinalLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URelocateSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_InitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_FinalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_InitialLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_FinalLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateSceneComponent_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_URelocateSceneComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URelocateSceneComponent_Statics::PropPointers),
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
		{ Z_Construct_UClass_URelocateSceneComponent, URelocateSceneComponent::StaticClass, TEXT("URelocateSceneComponent"), &Z_Registration_Info_UClass_URelocateSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URelocateSceneComponent), 3604568940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_3941482911(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
