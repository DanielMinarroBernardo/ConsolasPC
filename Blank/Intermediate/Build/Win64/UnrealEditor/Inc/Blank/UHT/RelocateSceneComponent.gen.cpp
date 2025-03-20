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
BLANK_API UEnum* Z_Construct_UEnum_Blank_ERelocationState();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Blank();
// End Cross Module References

// Begin Enum ERelocationState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERelocationState;
static UEnum* ERelocationState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERelocationState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERelocationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Blank_ERelocationState, (UObject*)Z_Construct_UPackage__Script_Blank(), TEXT("ERelocationState"));
	}
	return Z_Registration_Info_UEnum_ERelocationState.OuterSingleton;
}
template<> BLANK_API UEnum* StaticEnum<ERelocationState>()
{
	return ERelocationState_StaticEnum();
}
struct Z_Construct_UEnum_Blank_ERelocationState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EndState.Name", "ERelocationState::EndState" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
		{ "MovingToEnd.Name", "ERelocationState::MovingToEnd" },
		{ "MovingToStart.Name", "ERelocationState::MovingToStart" },
		{ "StartState.Name", "ERelocationState::StartState" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERelocationState::StartState", (int64)ERelocationState::StartState },
		{ "ERelocationState::EndState", (int64)ERelocationState::EndState },
		{ "ERelocationState::MovingToStart", (int64)ERelocationState::MovingToStart },
		{ "ERelocationState::MovingToEnd", (int64)ERelocationState::MovingToEnd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Blank_ERelocationState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Blank,
	nullptr,
	"ERelocationState",
	"ERelocationState",
	Z_Construct_UEnum_Blank_ERelocationState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Blank_ERelocationState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Blank_ERelocationState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Blank_ERelocationState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Blank_ERelocationState()
{
	if (!Z_Registration_Info_UEnum_ERelocationState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERelocationState.InnerSingleton, Z_Construct_UEnum_Blank_ERelocationState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERelocationState.InnerSingleton;
}
// End Enum ERelocationState

// Begin Class URelocateSceneComponent Function GoToNextState
struct Z_Construct_UFunction_URelocateSceneComponent_GoToNextState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateSceneComponent_GoToNextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateSceneComponent, nullptr, "GoToNextState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_GoToNextState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateSceneComponent_GoToNextState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URelocateSceneComponent_GoToNextState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateSceneComponent_GoToNextState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateSceneComponent::execGoToNextState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoToNextState();
	P_NATIVE_END;
}
// End Class URelocateSceneComponent Function GoToNextState

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

// Begin Class URelocateSceneComponent Function SetState
struct Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics
{
	struct RelocateSceneComponent_eventSetState_Parms
	{
		ERelocationState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RelocateSceneComponent_eventSetState_Parms, NewState), Z_Construct_UEnum_Blank_ERelocationState, METADATA_PARAMS(0, nullptr) }; // 3166637051
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateSceneComponent, nullptr, "SetState", nullptr, nullptr, Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::RelocateSceneComponent_eventSetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::RelocateSceneComponent_eventSetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URelocateSceneComponent_SetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateSceneComponent_SetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateSceneComponent::execSetState)
{
	P_GET_ENUM(ERelocationState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetState(ERelocationState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class URelocateSceneComponent Function SetState

// Begin Class URelocateSceneComponent Function TeleportToEnd
struct Z_Construct_UFunction_URelocateSceneComponent_TeleportToEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateSceneComponent_TeleportToEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateSceneComponent, nullptr, "TeleportToEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_TeleportToEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateSceneComponent_TeleportToEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URelocateSceneComponent_TeleportToEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateSceneComponent_TeleportToEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateSceneComponent::execTeleportToEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeleportToEnd();
	P_NATIVE_END;
}
// End Class URelocateSceneComponent Function TeleportToEnd

// Begin Class URelocateSceneComponent Function TeleportToStart
struct Z_Construct_UFunction_URelocateSceneComponent_TeleportToStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RelocateCmp" },
		{ "ModuleRelativePath", "Public/RelocateSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URelocateSceneComponent_TeleportToStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URelocateSceneComponent, nullptr, "TeleportToStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URelocateSceneComponent_TeleportToStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_URelocateSceneComponent_TeleportToStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URelocateSceneComponent_TeleportToStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URelocateSceneComponent_TeleportToStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URelocateSceneComponent::execTeleportToStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeleportToStart();
	P_NATIVE_END;
}
// End Class URelocateSceneComponent Function TeleportToStart

// Begin Class URelocateSceneComponent
void URelocateSceneComponent::StaticRegisterNativesURelocateSceneComponent()
{
	UClass* Class = URelocateSceneComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GoToNextState", &URelocateSceneComponent::execGoToNextState },
		{ "MoveToEnd", &URelocateSceneComponent::execMoveToEnd },
		{ "MoveToStart", &URelocateSceneComponent::execMoveToStart },
		{ "SetState", &URelocateSceneComponent::execSetState },
		{ "TeleportToEnd", &URelocateSceneComponent::execTeleportToEnd },
		{ "TeleportToStart", &URelocateSceneComponent::execTeleportToStart },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMustBeginOnEndState_MetaData[] = {
		{ "Category", "RelocateSceneComponent" },
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
	static void NewProp_bMustBeginOnEndState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustBeginOnEndState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FinalLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URelocateSceneComponent_GoToNextState, "GoToNextState" }, // 2073325051
		{ &Z_Construct_UFunction_URelocateSceneComponent_MoveToEnd, "MoveToEnd" }, // 1846625850
		{ &Z_Construct_UFunction_URelocateSceneComponent_MoveToStart, "MoveToStart" }, // 2368989995
		{ &Z_Construct_UFunction_URelocateSceneComponent_SetState, "SetState" }, // 1286611581
		{ &Z_Construct_UFunction_URelocateSceneComponent_TeleportToEnd, "TeleportToEnd" }, // 3794757547
		{ &Z_Construct_UFunction_URelocateSceneComponent_TeleportToStart, "TeleportToStart" }, // 3787094800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URelocateSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_bMustBeginOnEndState_SetBit(void* Obj)
{
	((URelocateSceneComponent*)Obj)->bMustBeginOnEndState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_bMustBeginOnEndState = { "bMustBeginOnEndState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URelocateSceneComponent), &Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_bMustBeginOnEndState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMustBeginOnEndState_MetaData), NewProp_bMustBeginOnEndState_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRotation_MetaData), NewProp_InitialRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_FinalRotation = { "FinalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, FinalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalRotation_MetaData), NewProp_FinalRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLocation_MetaData), NewProp_InitialLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_FinalLocation = { "FinalLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URelocateSceneComponent, FinalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalLocation_MetaData), NewProp_FinalLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URelocateSceneComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URelocateSceneComponent_Statics::NewProp_bMustBeginOnEndState,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERelocationState_StaticEnum, TEXT("ERelocationState"), &Z_Registration_Info_UEnum_ERelocationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3166637051U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URelocateSceneComponent, URelocateSceneComponent::StaticClass, TEXT("URelocateSceneComponent"), &Z_Registration_Info_UClass_URelocateSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URelocateSceneComponent), 1138911742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_3587671128(TEXT("/Script/Blank"),
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blank_Source_Blank_Public_RelocateSceneComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
