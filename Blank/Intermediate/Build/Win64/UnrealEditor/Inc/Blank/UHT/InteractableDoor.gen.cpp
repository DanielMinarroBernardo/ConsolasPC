// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank/Public/InteractableDoor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableDoor() {}

// Begin Cross Module References
BLANK_API UClass* Z_Construct_UClass_AInteractableDoor();
BLANK_API UClass* Z_Construct_UClass_AInteractableDoor_NoRegister();
BLANK_API UFunction* Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Delegate FOnDoorMove
struct Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Espacio para meter los delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Espacio para meter los delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blank, nullptr, "OnDoorMove__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDoorMove_DelegateWrapper(const FMulticastScriptDelegate& OnDoorMove)
{
	OnDoorMove.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDoorMove

// Begin Class AInteractableDoor Function OnDoorTriggerOverlap
struct Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics
{
	struct InteractableDoor_eventOnDoorTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FUNCTION\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FUNCTION" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractableDoor_eventOnDoorTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableDoor_eventOnDoorTriggerOverlap_Parms), &Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "OnDoorTriggerOverlap", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::InteractableDoor_eventOnDoorTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::InteractableDoor_eventOnDoorTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execOnDoorTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorTriggerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AInteractableDoor Function OnDoorTriggerOverlap

// Begin Class AInteractableDoor Function OnExitTriggerOverlap
struct Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics
{
	struct InteractableDoor_eventOnExitTriggerOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FUNCTION\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FUNCTION" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnExitTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnExitTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnExitTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnExitTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractableDoor_eventOnExitTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableDoor_eventOnExitTriggerOverlap_Parms), &Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnExitTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "OnExitTriggerOverlap", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::InteractableDoor_eventOnExitTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::InteractableDoor_eventOnExitTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execOnExitTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitTriggerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AInteractableDoor Function OnExitTriggerOverlap

// Begin Class AInteractableDoor Function UpdateMoveDoor
struct Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics
{
	struct InteractableDoor_eventUpdateMoveDoor_Parms
	{
		bool ShouldOpen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShouldOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_ShouldOpen_SetBit(void* Obj)
{
	((InteractableDoor_eventUpdateMoveDoor_Parms*)Obj)->ShouldOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_ShouldOpen = { "ShouldOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableDoor_eventUpdateMoveDoor_Parms), &Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_ShouldOpen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_ShouldOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "UpdateMoveDoor", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::InteractableDoor_eventUpdateMoveDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::InteractableDoor_eventUpdateMoveDoor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execUpdateMoveDoor)
{
	P_GET_UBOOL(Z_Param_ShouldOpen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMoveDoor(Z_Param_ShouldOpen);
	P_NATIVE_END;
}
// End Class AInteractableDoor Function UpdateMoveDoor

// Begin Class AInteractableDoor
void AInteractableDoor::StaticRegisterNativesAInteractableDoor()
{
	UClass* Class = AInteractableDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDoorTriggerOverlap", &AInteractableDoor::execOnDoorTriggerOverlap },
		{ "OnExitTriggerOverlap", &AInteractableDoor::execOnExitTriggerOverlap },
		{ "UpdateMoveDoor", &AInteractableDoor::execUpdateMoveDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableDoor);
UClass* Z_Construct_UClass_AInteractableDoor_NoRegister()
{
	return AInteractableDoor::StaticClass();
}
struct Z_Construct_UClass_AInteractableDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableDoor.h" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorMove_MetaData[] = {
		{ "Category", "Delegates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DELEGATES\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DELEGATES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotationOpen_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PROPERTIES //\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PROPERTIES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotationClose_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//COMPONENTES//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COMPONENTES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorTrigger_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloseDoorTrigger_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotationOpen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotationClose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseDoorTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap, "OnDoorTriggerOverlap" }, // 547538652
		{ &Z_Construct_UFunction_AInteractableDoor_OnExitTriggerOverlap, "OnExitTriggerOverlap" }, // 3229484173
		{ &Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor, "UpdateMoveDoor" }, // 3316197284
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorMove = { "OnDoorMove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, OnDoorMove), Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDoorMove_MetaData), NewProp_OnDoorMove_MetaData) }; // 422889827
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationOpen = { "TargetRotationOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, TargetRotationOpen), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotationOpen_MetaData), NewProp_TargetRotationOpen_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationClose = { "TargetRotationClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, TargetRotationClose), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotationClose_MetaData), NewProp_TargetRotationClose_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorTrigger = { "DoorTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, DoorTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorTrigger_MetaData), NewProp_DoorTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_CloseDoorTrigger = { "CloseDoorTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, CloseDoorTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloseDoorTrigger_MetaData), NewProp_CloseDoorTrigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_CloseDoorTrigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableDoor_Statics::ClassParams = {
	&AInteractableDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractableDoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableDoor()
{
	if (!Z_Registration_Info_UClass_AInteractableDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableDoor.OuterSingleton, Z_Construct_UClass_AInteractableDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableDoor.OuterSingleton;
}
template<> BLANK_API UClass* StaticClass<AInteractableDoor>()
{
	return AInteractableDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableDoor);
AInteractableDoor::~AInteractableDoor() {}
// End Class AInteractableDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_InteractableDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableDoor, AInteractableDoor::StaticClass, TEXT("AInteractableDoor"), &Z_Registration_Info_UClass_AInteractableDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableDoor), 1936838872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_InteractableDoor_h_3114197839(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_InteractableDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_InteractableDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
