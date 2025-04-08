// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/AsyncTaskStreamSublevels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskStreamSublevels() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_UAsyncTaskStreamSublevels();
BLANK_API UClass* Z_Construct_UClass_UAsyncTaskStreamSublevels_NoRegister();
BLANK_API UFunction* Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Delegate FFROnCompleteLoadDelegate
struct Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskStreamSublevels, nullptr, "FROnCompleteLoadDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAsyncTaskStreamSublevels::FFROnCompleteLoadDelegate_DelegateWrapper(const FMulticastScriptDelegate& FROnCompleteLoadDelegate)
{
	FROnCompleteLoadDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FFROnCompleteLoadDelegate

// Begin Class UAsyncTaskStreamSublevels Function OnLevelLoaded
struct Z_Construct_UFunction_UAsyncTaskStreamSublevels_OnLevelLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskStreamSublevels_OnLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskStreamSublevels, nullptr, "OnLevelLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskStreamSublevels_OnLevelLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskStreamSublevels_OnLevelLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAsyncTaskStreamSublevels_OnLevelLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskStreamSublevels_OnLevelLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskStreamSublevels::execOnLevelLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelLoaded();
	P_NATIVE_END;
}
// End Class UAsyncTaskStreamSublevels Function OnLevelLoaded

// Begin Class UAsyncTaskStreamSublevels Function StreamSublevel
struct Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics
{
	struct AsyncTaskStreamSublevels_eventStreamSublevel_Parms
	{
		UObject* WorldContextObject;
		FName SubLevelToLoad;
		bool bVisibleAfterLoad;
		UAsyncTaskStreamSublevels* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SubLevelToLoad" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubLevelToLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubLevelToLoad;
	static void NewProp_bVisibleAfterLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleAfterLoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskStreamSublevels_eventStreamSublevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_SubLevelToLoad = { "SubLevelToLoad", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskStreamSublevels_eventStreamSublevel_Parms, SubLevelToLoad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubLevelToLoad_MetaData), NewProp_SubLevelToLoad_MetaData) };
void Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_bVisibleAfterLoad_SetBit(void* Obj)
{
	((AsyncTaskStreamSublevels_eventStreamSublevel_Parms*)Obj)->bVisibleAfterLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_bVisibleAfterLoad = { "bVisibleAfterLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTaskStreamSublevels_eventStreamSublevel_Parms), &Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_bVisibleAfterLoad_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskStreamSublevels_eventStreamSublevel_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskStreamSublevels_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_SubLevelToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_bVisibleAfterLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTaskStreamSublevels, nullptr, "StreamSublevel", nullptr, nullptr, Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::AsyncTaskStreamSublevels_eventStreamSublevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::AsyncTaskStreamSublevels_eventStreamSublevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskStreamSublevels::execStreamSublevel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FNameProperty,Z_Param_SubLevelToLoad);
	P_GET_UBOOL(Z_Param_bVisibleAfterLoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncTaskStreamSublevels**)Z_Param__Result=UAsyncTaskStreamSublevels::StreamSublevel(Z_Param_WorldContextObject,Z_Param_SubLevelToLoad,Z_Param_bVisibleAfterLoad);
	P_NATIVE_END;
}
// End Class UAsyncTaskStreamSublevels Function StreamSublevel

// Begin Class UAsyncTaskStreamSublevels
void UAsyncTaskStreamSublevels::StaticRegisterNativesUAsyncTaskStreamSublevels()
{
	UClass* Class = UAsyncTaskStreamSublevels::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnLevelLoaded", &UAsyncTaskStreamSublevels::execOnLevelLoaded },
		{ "StreamSublevel", &UAsyncTaskStreamSublevels::execStreamSublevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTaskStreamSublevels);
UClass* Z_Construct_UClass_UAsyncTaskStreamSublevels_NoRegister()
{
	return UAsyncTaskStreamSublevels::StaticClass();
}
struct Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncTaskStreamSublevels.h" },
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SublevelToLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShoulBeVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompletedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__WorldReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskStreamSublevels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SublevelToLoad;
	static void NewProp_bShoulBeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShoulBeVisible;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompletedDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__WorldReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature, "FROnCompleteLoadDelegate__DelegateSignature" }, // 1570142531
		{ &Z_Construct_UFunction_UAsyncTaskStreamSublevels_OnLevelLoaded, "OnLevelLoaded" }, // 1247732405
		{ &Z_Construct_UFunction_UAsyncTaskStreamSublevels_StreamSublevel, "StreamSublevel" }, // 794431115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskStreamSublevels>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_SublevelToLoad = { "SublevelToLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskStreamSublevels, SublevelToLoad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SublevelToLoad_MetaData), NewProp_SublevelToLoad_MetaData) };
void Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_bShoulBeVisible_SetBit(void* Obj)
{
	((UAsyncTaskStreamSublevels*)Obj)->bShoulBeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_bShoulBeVisible = { "bShoulBeVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncTaskStreamSublevels), &Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_bShoulBeVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShoulBeVisible_MetaData), NewProp_bShoulBeVisible_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_OnCompletedDelegate = { "OnCompletedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskStreamSublevels, OnCompletedDelegate), Z_Construct_UDelegateFunction_UAsyncTaskStreamSublevels_FROnCompleteLoadDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompletedDelegate_MetaData), NewProp_OnCompletedDelegate_MetaData) }; // 1570142531
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp__WorldReference = { "_WorldReference", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskStreamSublevels, _WorldReference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__WorldReference_MetaData), NewProp__WorldReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_SublevelToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_bShoulBeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp_OnCompletedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::NewProp__WorldReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::ClassParams = {
	&UAsyncTaskStreamSublevels::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncTaskStreamSublevels()
{
	if (!Z_Registration_Info_UClass_UAsyncTaskStreamSublevels.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTaskStreamSublevels.OuterSingleton, Z_Construct_UClass_UAsyncTaskStreamSublevels_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTaskStreamSublevels.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<UAsyncTaskStreamSublevels>()
{
	return UAsyncTaskStreamSublevels::StaticClass();
}
UAsyncTaskStreamSublevels::UAsyncTaskStreamSublevels(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskStreamSublevels);
UAsyncTaskStreamSublevels::~UAsyncTaskStreamSublevels() {}
// End Class UAsyncTaskStreamSublevels

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTaskStreamSublevels, UAsyncTaskStreamSublevels::StaticClass, TEXT("UAsyncTaskStreamSublevels"), &Z_Registration_Info_UClass_UAsyncTaskStreamSublevels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTaskStreamSublevels), 880880430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_746815897(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_AsyncTaskStreamSublevels_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
