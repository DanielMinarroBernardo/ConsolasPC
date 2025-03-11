// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/RelocateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRelocateComponent() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_URelocateComponent();
BLANK_API UClass* Z_Construct_UClass_URelocateComponent_NoRegister();
BLANK_API UFunction* Z_Construct_UDelegateFunction_Blank_OnFinished__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Delegate FOnFinished
struct Z_Construct_UDelegateFunction_Blank_OnFinished__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blank_OnFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blank, nullptr, "OnFinished__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blank_OnFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Blank_OnFinished__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Blank_OnFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blank_OnFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFinished_DelegateWrapper(const FMulticastScriptDelegate& OnFinished)
{
	OnFinished.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFinished

// Begin Class URelocateComponent Function MoveToEnd
struct Z_Construct_UFunction_URelocateComponent_MoveToEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateComponent_MoveToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateComponent, nullptr, "MoveToEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateComponent_MoveToEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateComponent_MoveToEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URelocateComponent_MoveToEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateComponent_MoveToEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateComponent::execMoveToEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToEnd();
	P_NATIVE_END;
}
// End Class URelocateComponent Function MoveToEnd

// Begin Class URelocateComponent Function MoveToStart
struct Z_Construct_UFunction_URelocateComponent_MoveToStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateComponent_MoveToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateComponent, nullptr, "MoveToStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateComponent_MoveToStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateComponent_MoveToStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URelocateComponent_MoveToStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateComponent_MoveToStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateComponent::execMoveToStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToStart();
	P_NATIVE_END;
}
// End Class URelocateComponent Function MoveToStart

// Begin Class URelocateComponent
void URelocateComponent::StaticRegisterNativesURelocateComponent()
{
	UClass* Class = URelocateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MoveToEnd", &URelocateComponent::execMoveToEnd },
		{ "MoveToStart", &URelocateComponent::execMoveToStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URelocateComponent);
UClass* Z_Construct_UClass_URelocateComponent_NoRegister()
{
	return URelocateComponent::StaticClass();
}
struct Z_Construct_UClass_URelocateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RelocateComponent.h" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalRotation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalLocation_MetaData[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__StaticMesh_MetaData[] = {
		{ "Category", "RelocateComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RelocateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URelocateComponent_MoveToEnd, "MoveToEnd" }, // 2458042885
		{ &Z_Construct_UFunction_URelocateComponent_MoveToStart, "MoveToStart" }, // 3710468936
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URelocateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateComponent_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateComponent, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRotation_MetaData), NewProp_InitialRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateComponent_Statics::NewProp_FinalRotation = { "FinalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateComponent, FinalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalRotation_MetaData), NewProp_FinalRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateComponent_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateComponent, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLocation_MetaData), NewProp_InitialLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateComponent_Statics::NewProp_FinalLocation = { "FinalLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateComponent, FinalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalLocation_MetaData), NewProp_FinalLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URelocateComponent_Statics::NewProp__StaticMesh = { "_StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateComponent, _StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__StaticMesh_MetaData), NewProp__StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URelocateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateComponent_Statics::NewProp_InitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateComponent_Statics::NewProp_FinalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateComponent_Statics::NewProp_InitialLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateComponent_Statics::NewProp_FinalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateComponent_Statics::NewProp__StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URelocateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URelocateComponent_Statics::ClassParams = {
	&URelocateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URelocateComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URelocateComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URelocateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URelocateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URelocateComponent()
{
	if (!Z_Registration_Info_UClass_URelocateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URelocateComponent.OuterSingleton, Z_Construct_UClass_URelocateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URelocateComponent.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<URelocateComponent>()
{
	return URelocateComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URelocateComponent);
URelocateComponent::~URelocateComponent() {}
// End Class URelocateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URelocateComponent, URelocateComponent::StaticClass, TEXT("URelocateComponent"), &Z_Registration_Info_UClass_URelocateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URelocateComponent), 463529165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateComponent_h_286732214(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
