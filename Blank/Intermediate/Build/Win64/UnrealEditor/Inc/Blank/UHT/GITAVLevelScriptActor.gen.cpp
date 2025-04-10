// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/GITAVLevelScriptActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGITAVLevelScriptActor() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_AGITAVLevelScriptActor();
BLANK_API UClass* Z_Construct_UClass_AGITAVLevelScriptActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Class AGITAVLevelScriptActor Function LoadNextSublevel
struct Z_Construct_UFunction_AGITAVLevelScriptActor_LoadNextSublevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GITAVLevelScriptActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGITAVLevelScriptActor_LoadNextSublevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGITAVLevelScriptActor, nullptr, "LoadNextSublevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_LoadNextSublevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGITAVLevelScriptActor_LoadNextSublevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGITAVLevelScriptActor_LoadNextSublevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGITAVLevelScriptActor_LoadNextSublevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGITAVLevelScriptActor::execLoadNextSublevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadNextSublevel();
	P_NATIVE_END;
}
// End Class AGITAVLevelScriptActor Function LoadNextSublevel

// Begin Class AGITAVLevelScriptActor Function LoadTargetLevel
struct Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics
{
	struct GITAVLevelScriptActor_eventLoadTargetLevel_Parms
	{
		FName LevelName;
		bool bShouldBeLoaded;
		bool bShoulBeVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Streaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/************************************************************************************************/" },
#endif
		{ "ModuleRelativePath", "Public/GITAVLevelScriptActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static void NewProp_bShouldBeLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLoaded;
	static void NewProp_bShoulBeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShoulBeVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GITAVLevelScriptActor_eventLoadTargetLevel_Parms, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
void Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShouldBeLoaded_SetBit(void* Obj)
{
	((GITAVLevelScriptActor_eventLoadTargetLevel_Parms*)Obj)->bShouldBeLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShouldBeLoaded = { "bShouldBeLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GITAVLevelScriptActor_eventLoadTargetLevel_Parms), &Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShouldBeLoaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShoulBeVisible_SetBit(void* Obj)
{
	((GITAVLevelScriptActor_eventLoadTargetLevel_Parms*)Obj)->bShoulBeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShoulBeVisible = { "bShoulBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GITAVLevelScriptActor_eventLoadTargetLevel_Parms), &Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShoulBeVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShouldBeLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::NewProp_bShoulBeVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGITAVLevelScriptActor, nullptr, "LoadTargetLevel", nullptr, nullptr, Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::GITAVLevelScriptActor_eventLoadTargetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::GITAVLevelScriptActor_eventLoadTargetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGITAVLevelScriptActor::execLoadTargetLevel)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_GET_UBOOL(Z_Param_bShouldBeLoaded);
	P_GET_UBOOL(Z_Param_bShoulBeVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadTargetLevel(Z_Param_LevelName,Z_Param_bShouldBeLoaded,Z_Param_bShoulBeVisible);
	P_NATIVE_END;
}
// End Class AGITAVLevelScriptActor Function LoadTargetLevel

// Begin Class AGITAVLevelScriptActor Function OnLevelLoaded
struct Z_Construct_UFunction_AGITAVLevelScriptActor_OnLevelLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Streaming" },
		{ "ModuleRelativePath", "Public/GITAVLevelScriptActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGITAVLevelScriptActor_OnLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGITAVLevelScriptActor, nullptr, "OnLevelLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_OnLevelLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGITAVLevelScriptActor_OnLevelLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGITAVLevelScriptActor_OnLevelLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGITAVLevelScriptActor_OnLevelLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGITAVLevelScriptActor::execOnLevelLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLevelLoaded();
	P_NATIVE_END;
}
// End Class AGITAVLevelScriptActor Function OnLevelLoaded

// Begin Class AGITAVLevelScriptActor Function StreamSublevels
struct Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics
{
	struct GITAVLevelScriptActor_eventStreamSublevels_Parms
	{
		TArray<FName> LevelsToLoad;
		bool bShoulBeVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level Streaming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/************************************************************************************************/" },
#endif
		{ "ModuleRelativePath", "Public/GITAVLevelScriptActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelsToLoad_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelsToLoad;
	static void NewProp_bShoulBeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShoulBeVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_LevelsToLoad_Inner = { "LevelsToLoad", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_LevelsToLoad = { "LevelsToLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GITAVLevelScriptActor_eventStreamSublevels_Parms, LevelsToLoad), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_bShoulBeVisible_SetBit(void* Obj)
{
	((GITAVLevelScriptActor_eventStreamSublevels_Parms*)Obj)->bShoulBeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_bShoulBeVisible = { "bShoulBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GITAVLevelScriptActor_eventStreamSublevels_Parms), &Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_bShoulBeVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_LevelsToLoad_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_LevelsToLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::NewProp_bShoulBeVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGITAVLevelScriptActor, nullptr, "StreamSublevels", nullptr, nullptr, Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::GITAVLevelScriptActor_eventStreamSublevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::GITAVLevelScriptActor_eventStreamSublevels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGITAVLevelScriptActor::execStreamSublevels)
{
	P_GET_TARRAY(FName,Z_Param_LevelsToLoad);
	P_GET_UBOOL(Z_Param_bShoulBeVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StreamSublevels(Z_Param_LevelsToLoad,Z_Param_bShoulBeVisible);
	P_NATIVE_END;
}
// End Class AGITAVLevelScriptActor Function StreamSublevels

// Begin Class AGITAVLevelScriptActor
void AGITAVLevelScriptActor::StaticRegisterNativesAGITAVLevelScriptActor()
{
	UClass* Class = AGITAVLevelScriptActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadNextSublevel", &AGITAVLevelScriptActor::execLoadNextSublevel },
		{ "LoadTargetLevel", &AGITAVLevelScriptActor::execLoadTargetLevel },
		{ "OnLevelLoaded", &AGITAVLevelScriptActor::execOnLevelLoaded },
		{ "StreamSublevels", &AGITAVLevelScriptActor::execStreamSublevels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGITAVLevelScriptActor);
UClass* Z_Construct_UClass_AGITAVLevelScriptActor_NoRegister()
{
	return AGITAVLevelScriptActor::StaticClass();
}
struct Z_Construct_UClass_AGITAVLevelScriptActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GITAVLevelScriptActor.h" },
		{ "ModuleRelativePath", "Public/GITAVLevelScriptActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGITAVLevelScriptActor_LoadNextSublevel, "LoadNextSublevel" }, // 2187675820
		{ &Z_Construct_UFunction_AGITAVLevelScriptActor_LoadTargetLevel, "LoadTargetLevel" }, // 2906075961
		{ &Z_Construct_UFunction_AGITAVLevelScriptActor_OnLevelLoaded, "OnLevelLoaded" }, // 3286952810
		{ &Z_Construct_UFunction_AGITAVLevelScriptActor_StreamSublevels, "StreamSublevels" }, // 2702999245
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGITAVLevelScriptActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGITAVLevelScriptActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGITAVLevelScriptActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGITAVLevelScriptActor_Statics::ClassParams = {
	&AGITAVLevelScriptActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGITAVLevelScriptActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGITAVLevelScriptActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGITAVLevelScriptActor()
{
	if (!Z_Registration_Info_UClass_AGITAVLevelScriptActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGITAVLevelScriptActor.OuterSingleton, Z_Construct_UClass_AGITAVLevelScriptActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGITAVLevelScriptActor.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<AGITAVLevelScriptActor>()
{
	return AGITAVLevelScriptActor::StaticClass();
}
AGITAVLevelScriptActor::AGITAVLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGITAVLevelScriptActor);
AGITAVLevelScriptActor::~AGITAVLevelScriptActor() {}
// End Class AGITAVLevelScriptActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGITAVLevelScriptActor, AGITAVLevelScriptActor::StaticClass, TEXT("AGITAVLevelScriptActor"), &Z_Registration_Info_UClass_AGITAVLevelScriptActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGITAVLevelScriptActor), 1395960174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_804026628(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_GITAVLevelScriptActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
