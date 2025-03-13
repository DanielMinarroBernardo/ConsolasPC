// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practica0/InteractableDoor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableDoor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PRACTICA0_API UClass* Z_Construct_UClass_AInteractableDoor();
PRACTICA0_API UClass* Z_Construct_UClass_AInteractableDoor_NoRegister();
PRACTICA0_API UFunction* Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature();
PRACTICA0_API UFunction* Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Practica0();
// End Cross Module References

// Begin Delegate FOnDoorClosed
struct Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Practica0, nullptr, "OnDoorClosed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDoorClosed_DelegateWrapper(const FMulticastScriptDelegate& OnDoorClosed)
{
	OnDoorClosed.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDoorClosed

// Begin Delegate FOnDoorMoved
struct Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics
{
	struct _Script_Practica0_eventOnDoorMoved_Parms
	{
		bool bOpened;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOpened_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpened;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::NewProp_bOpened_SetBit(void* Obj)
{
	((_Script_Practica0_eventOnDoorMoved_Parms*)Obj)->bOpened = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Practica0_eventOnDoorMoved_Parms), &Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::NewProp_bOpened,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Practica0, nullptr, "OnDoorMoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::_Script_Practica0_eventOnDoorMoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::_Script_Practica0_eventOnDoorMoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDoorMoved_DelegateWrapper(const FMulticastScriptDelegate& OnDoorMoved, bool bOpened)
{
	struct _Script_Practica0_eventOnDoorMoved_Parms
	{
		bool bOpened;
	};
	_Script_Practica0_eventOnDoorMoved_Parms Parms;
	Parms.bOpened=bOpened ? true : false;
	OnDoorMoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDoorMoved

// Begin Class AInteractableDoor Function OnDoorBeginOverlap
struct Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics
{
	struct InteractableDoor_eventOnDoorBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractableDoor_eventOnDoorBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableDoor_eventOnDoorBeginOverlap_Parms), &Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "OnDoorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::InteractableDoor_eventOnDoorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::InteractableDoor_eventOnDoorBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execOnDoorBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AInteractableDoor Function OnDoorBeginOverlap

// Begin Class AInteractableDoor Function OnDoorExitBeginOverlap
struct Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics
{
	struct InteractableDoor_eventOnDoorExitBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorExitBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorExitBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorExitBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorExitBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractableDoor_eventOnDoorExitBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableDoor_eventOnDoorExitBeginOverlap_Parms), &Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnDoorExitBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "OnDoorExitBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::InteractableDoor_eventOnDoorExitBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::InteractableDoor_eventOnDoorExitBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execOnDoorExitBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDoorExitBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AInteractableDoor Function OnDoorExitBeginOverlap

// Begin Class AInteractableDoor Function UpdateMoveDoor
struct Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics
{
	struct InteractableDoor_eventUpdateMoveDoor_Parms
	{
		bool bShouldOpen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_bShouldOpen_SetBit(void* Obj)
{
	((InteractableDoor_eventUpdateMoveDoor_Parms*)Obj)->bShouldOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_bShouldOpen = { "bShouldOpen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableDoor_eventUpdateMoveDoor_Parms), &Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_bShouldOpen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::NewProp_bShouldOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "UpdateMoveDoor", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::InteractableDoor_eventUpdateMoveDoor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor_Statics::Function_MetaDataParams) };
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
	P_GET_UBOOL(Z_Param_bShouldOpen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMoveDoor(Z_Param_bShouldOpen);
	P_NATIVE_END;
}
// End Class AInteractableDoor Function UpdateMoveDoor

// Begin Class AInteractableDoor
void AInteractableDoor::StaticRegisterNativesAInteractableDoor()
{
	UClass* Class = AInteractableDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDoorBeginOverlap", &AInteractableDoor::execOnDoorBeginOverlap },
		{ "OnDoorExitBeginOverlap", &AInteractableDoor::execOnDoorExitBeginOverlap },
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
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorClosed_MetaData[] = {
		{ "Category", "InteractableDoor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* DELEGATES */" },
#endif
		{ "ModuleRelativePath", "InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DELEGATES" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorMoved_MetaData[] = {
		{ "Category", "InteractableDoor" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollisionExit_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotationDoorOpened_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotationDoorClosed_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorMoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollisionExit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotationDoorOpened;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotationDoorClosed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableDoor_OnDoorBeginOverlap, "OnDoorBeginOverlap" }, // 2677023670
		{ &Z_Construct_UFunction_AInteractableDoor_OnDoorExitBeginOverlap, "OnDoorExitBeginOverlap" }, // 3197172621
		{ &Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor, "UpdateMoveDoor" }, // 1898138115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorClosed = { "OnDoorClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, OnDoorClosed), Z_Construct_UDelegateFunction_Practica0_OnDoorClosed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDoorClosed_MetaData), NewProp_OnDoorClosed_MetaData) }; // 1521668675
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorMoved = { "OnDoorMoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, OnDoorMoved), Z_Construct_UDelegateFunction_Practica0_OnDoorMoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDoorMoved_MetaData), NewProp_OnDoorMoved_MetaData) }; // 3252852249
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_BoxCollisionExit = { "BoxCollisionExit", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, BoxCollisionExit), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollisionExit_MetaData), NewProp_BoxCollisionExit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationDoorOpened = { "TargetRotationDoorOpened", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, TargetRotationDoorOpened), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotationDoorOpened_MetaData), NewProp_TargetRotationDoorOpened_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationDoorClosed = { "TargetRotationDoorClosed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, TargetRotationDoorClosed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotationDoorClosed_MetaData), NewProp_TargetRotationDoorClosed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorMoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_BoxCollisionExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationDoorOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationDoorClosed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Practica0,
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
template<> PRACTICA0_API UClass* StaticClass<AInteractableDoor>()
{
	return AInteractableDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableDoor);
AInteractableDoor::~AInteractableDoor() {}
// End Class AInteractableDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableDoor, AInteractableDoor::StaticClass, TEXT("AInteractableDoor"), &Z_Registration_Info_UClass_AInteractableDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableDoor), 2000284860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_1821115498(TEXT("/Script/Practica0"),
	Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GIT_GITAV_CEU_GITAV_Main_Source_Practica0_InteractableDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
