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
BLANK_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
BLANK_API UClass* Z_Construct_UClass_URelocateComponent_NoRegister();
BLANK_API UClass* Z_Construct_UClass_URelocateSceneComponent_NoRegister();
BLANK_API UEnum* Z_Construct_UEnum_Blank_EInteractionType();
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
	struct _Script_Blank_eventOnDoorMove_Parms
	{
		bool bOpened;
	};
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
	static void NewProp_bOpened_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpened;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::NewProp_bOpened_SetBit(void* Obj)
{
	((_Script_Blank_eventOnDoorMove_Parms*)Obj)->bOpened = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Blank_eventOnDoorMove_Parms), &Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::NewProp_bOpened,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blank, nullptr, "OnDoorMove__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::_Script_Blank_eventOnDoorMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::_Script_Blank_eventOnDoorMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDoorMove_DelegateWrapper(const FMulticastScriptDelegate& OnDoorMove, bool bOpened)
{
	struct _Script_Blank_eventOnDoorMove_Parms
	{
		bool bOpened;
	};
	_Script_Blank_eventOnDoorMove_Parms Parms;
	Parms.bOpened=bOpened ? true : false;
	OnDoorMove.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDoorMove

// Begin Class AInteractableDoor Function CloseDoor
struct Z_Construct_UFunction_AInteractableDoor_CloseDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "CloseDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_CloseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_CloseDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AInteractableDoor_CloseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_CloseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execCloseDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDoor();
	P_NATIVE_END;
}
// End Class AInteractableDoor Function CloseDoor

// Begin Class AInteractableDoor Function Interact
struct InteractableDoor_eventInteract_Parms
{
	EInteractionType InteractionType;
};
static const FName NAME_AInteractableDoor_Interact = FName(TEXT("Interact"));
void AInteractableDoor::Interact(EInteractionType InteractionType)
{
	UFunction* Func = FindFunctionChecked(NAME_AInteractableDoor_Interact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InteractableDoor_eventInteract_Parms Parms;
		Parms.InteractionType=InteractionType;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Interact_Implementation(InteractionType);
	}
}
struct Z_Construct_UFunction_AInteractableDoor_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*INTERFACES*/" },
#endif
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "INTERFACES" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInteractableDoor_Interact_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AInteractableDoor_Interact_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventInteract_Parms, InteractionType), Z_Construct_UEnum_Blank_EInteractionType, METADATA_PARAMS(0, nullptr) }; // 1751724508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_Interact_Statics::NewProp_InteractionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_Interact_Statics::NewProp_InteractionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_Interact_Statics::PropPointers), sizeof(InteractableDoor_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractableDoor_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableDoor_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execInteract)
{
	P_GET_ENUM(EInteractionType,Z_Param_InteractionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(EInteractionType(Z_Param_InteractionType));
	P_NATIVE_END;
}
// End Class AInteractableDoor Function Interact

// Begin Class AInteractableDoor Function OnBooTriggerOverlap
struct Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics
{
	struct InteractableDoor_eventOnBooTriggerOverlap_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnBooTriggerOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnBooTriggerOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnBooTriggerOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnBooTriggerOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((InteractableDoor_eventOnBooTriggerOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractableDoor_eventOnBooTriggerOverlap_Parms), &Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableDoor_eventOnBooTriggerOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "OnBooTriggerOverlap", nullptr, nullptr, Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::InteractableDoor_eventOnBooTriggerOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::InteractableDoor_eventOnBooTriggerOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execOnBooTriggerOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBooTriggerOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AInteractableDoor Function OnBooTriggerOverlap

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

// Begin Class AInteractableDoor Function OpenDoor
struct Z_Construct_UFunction_AInteractableDoor_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractableDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractableDoor, nullptr, "OpenDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractableDoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractableDoor_OpenDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AInteractableDoor_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractableDoor_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AInteractableDoor::execOpenDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDoor();
	P_NATIVE_END;
}
// End Class AInteractableDoor Function OpenDoor

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
		{ "CloseDoor", &AInteractableDoor::execCloseDoor },
		{ "Interact", &AInteractableDoor::execInteract },
		{ "OnBooTriggerOverlap", &AInteractableDoor::execOnBooTriggerOverlap },
		{ "OnDoorTriggerOverlap", &AInteractableDoor::execOnDoorTriggerOverlap },
		{ "OpenDoor", &AInteractableDoor::execOpenDoor },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooTrigger_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myRelocateComponent_MetaData[] = {
		{ "Category", "Setup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_myRelocateSceneComponent_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BooTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_myRelocateComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_myRelocateSceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractableDoor_CloseDoor, "CloseDoor" }, // 3668877248
		{ &Z_Construct_UFunction_AInteractableDoor_Interact, "Interact" }, // 1493588709
		{ &Z_Construct_UFunction_AInteractableDoor_OnBooTriggerOverlap, "OnBooTriggerOverlap" }, // 2780221198
		{ &Z_Construct_UFunction_AInteractableDoor_OnDoorTriggerOverlap, "OnDoorTriggerOverlap" }, // 547538652
		{ &Z_Construct_UFunction_AInteractableDoor_OpenDoor, "OpenDoor" }, // 1439954948
		{ &Z_Construct_UFunction_AInteractableDoor_UpdateMoveDoor, "UpdateMoveDoor" }, // 3316197284
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorMove = { "OnDoorMove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, OnDoorMove), Z_Construct_UDelegateFunction_Blank_OnDoorMove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDoorMove_MetaData), NewProp_OnDoorMove_MetaData) }; // 3145288289
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationOpen = { "TargetRotationOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, TargetRotationOpen), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotationOpen_MetaData), NewProp_TargetRotationOpen_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationClose = { "TargetRotationClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, TargetRotationClose), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotationClose_MetaData), NewProp_TargetRotationClose_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorTrigger = { "DoorTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, DoorTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorTrigger_MetaData), NewProp_DoorTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_BooTrigger = { "BooTrigger", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, BooTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooTrigger_MetaData), NewProp_BooTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_myRelocateComponent = { "myRelocateComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, myRelocateComponent), Z_Construct_UClass_URelocateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myRelocateComponent_MetaData), NewProp_myRelocateComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoor_Statics::NewProp_myRelocateSceneComponent = { "myRelocateSceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableDoor, myRelocateSceneComponent), Z_Construct_UClass_URelocateSceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_myRelocateSceneComponent_MetaData), NewProp_myRelocateSceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_OnDoorMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_TargetRotationClose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_DoorTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_BooTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_myRelocateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoor_Statics::NewProp_myRelocateSceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Blank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractableDoor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractableDoor, IInteractionInterface), false },  // 2351282956
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableDoor_Statics::ClassParams = {
	&AInteractableDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AInteractableDoor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AInteractableDoor, AInteractableDoor::StaticClass, TEXT("AInteractableDoor"), &Z_Registration_Info_UClass_AInteractableDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableDoor), 4090971504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_InteractableDoor_h_3565720552(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_InteractableDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_InteractableDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
