// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Multiplayer/Public/Actors/MtInteractableListenerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMtInteractableListenerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MULTIPLAYER_API UClass* Z_Construct_UClass_AMtInteractableBase_NoRegister();
	MULTIPLAYER_API UClass* Z_Construct_UClass_AMtInteractableListenerBase();
	MULTIPLAYER_API UClass* Z_Construct_UClass_AMtInteractableListenerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Multiplayer();
// End Cross Module References
	DEFINE_FUNCTION(AMtInteractableListenerBase::execOnToggleActive)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnToggleActive_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMtInteractableListenerBase::execToggleActive)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleActive(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMtInteractableListenerBase::execOnInteractableStateChanged)
	{
		P_GET_UBOOL(Z_Param_CurrentState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteractableStateChanged(Z_Param_CurrentState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMtInteractableListenerBase::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	struct MtInteractableListenerBase_eventOnToggleActive_Parms
	{
		bool Value;
	};
	static FName NAME_AMtInteractableListenerBase_OnToggleActive = FName(TEXT("OnToggleActive"));
	void AMtInteractableListenerBase::OnToggleActive(bool Value)
	{
		MtInteractableListenerBase_eventOnToggleActive_Parms Parms;
		Parms.Value=Value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMtInteractableListenerBase_OnToggleActive),&Parms);
	}
	void AMtInteractableListenerBase::StaticRegisterNativesAMtInteractableListenerBase()
	{
		UClass* Class = AMtInteractableListenerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteractableStateChanged", &AMtInteractableListenerBase::execOnInteractableStateChanged },
			{ "OnRep_IsActive", &AMtInteractableListenerBase::execOnRep_IsActive },
			{ "OnToggleActive", &AMtInteractableListenerBase::execOnToggleActive },
			{ "ToggleActive", &AMtInteractableListenerBase::execToggleActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics
	{
		struct MtInteractableListenerBase_eventOnInteractableStateChanged_Parms
		{
			bool CurrentState;
		};
		static void NewProp_CurrentState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::NewProp_CurrentState_SetBit(void* Obj)
	{
		((MtInteractableListenerBase_eventOnInteractableStateChanged_Parms*)Obj)->CurrentState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MtInteractableListenerBase_eventOnInteractableStateChanged_Parms), &Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::NewProp_CurrentState_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::NewProp_CurrentState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableListenerBase, nullptr, "OnInteractableStateChanged", nullptr, nullptr, Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::MtInteractableListenerBase_eventOnInteractableStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::MtInteractableListenerBase_eventOnInteractableStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableListenerBase, nullptr, "OnRep_IsActive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics
	{
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((MtInteractableListenerBase_eventOnToggleActive_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MtInteractableListenerBase_eventOnToggleActive_Parms), &Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ListenerEvent" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableListenerBase, nullptr, "OnToggleActive", nullptr, nullptr, Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::PropPointers), sizeof(MtInteractableListenerBase_eventOnToggleActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(MtInteractableListenerBase_eventOnToggleActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics
	{
		struct MtInteractableListenerBase_eventToggleActive_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((MtInteractableListenerBase_eventToggleActive_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MtInteractableListenerBase_eventToggleActive_Parms), &Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Listener|Functions" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableListenerBase, nullptr, "ToggleActive", nullptr, nullptr, Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::MtInteractableListenerBase_eventToggleActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::MtInteractableListenerBase_eventToggleActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMtInteractableListenerBase);
	UClass* Z_Construct_UClass_AMtInteractableListenerBase_NoRegister()
	{
		return AMtInteractableListenerBase::StaticClass();
	}
	struct Z_Construct_UClass_AMtInteractableListenerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldActivateOnce_MetaData[];
#endif
		static void NewProp_bShouldActivateOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldActivateOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedTriggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestedTriggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMtInteractableListenerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Multiplayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMtInteractableListenerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMtInteractableListenerBase_OnInteractableStateChanged, "OnInteractableStateChanged" }, // 3431486026
		{ &Z_Construct_UFunction_AMtInteractableListenerBase_OnRep_IsActive, "OnRep_IsActive" }, // 1820300106
		{ &Z_Construct_UFunction_AMtInteractableListenerBase_OnToggleActive, "OnToggleActive" }, // 1760674865
		{ &Z_Construct_UFunction_AMtInteractableListenerBase_ToggleActive, "ToggleActive" }, // 2928280271
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMtInteractableListenerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/MtInteractableListenerBase.h" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_bShouldActivateOnce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ListenerSettings" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
	void Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_bShouldActivateOnce_SetBit(void* Obj)
	{
		((AMtInteractableListenerBase*)Obj)->bShouldActivateOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_bShouldActivateOnce = { "bShouldActivateOnce", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMtInteractableListenerBase), &Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_bShouldActivateOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_bShouldActivateOnce_MetaData), Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_bShouldActivateOnce_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_RequestedTriggers_Inner = { "RequestedTriggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMtInteractableBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_RequestedTriggers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ListenerSettings" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_RequestedTriggers = { "RequestedTriggers", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMtInteractableListenerBase, RequestedTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_RequestedTriggers_MetaData), Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_RequestedTriggers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_IsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/MtInteractableListenerBase.h" },
	};
#endif
	void Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((AMtInteractableListenerBase*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_IsActive = { "IsActive", "OnRep_IsActive", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMtInteractableListenerBase), &Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_IsActive_MetaData), Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_IsActive_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMtInteractableListenerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_bShouldActivateOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_RequestedTriggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_RequestedTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMtInteractableListenerBase_Statics::NewProp_IsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMtInteractableListenerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMtInteractableListenerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMtInteractableListenerBase_Statics::ClassParams = {
		&AMtInteractableListenerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMtInteractableListenerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMtInteractableListenerBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableListenerBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMtInteractableListenerBase()
	{
		if (!Z_Registration_Info_UClass_AMtInteractableListenerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMtInteractableListenerBase.OuterSingleton, Z_Construct_UClass_AMtInteractableListenerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMtInteractableListenerBase.OuterSingleton;
	}
	template<> MULTIPLAYER_API UClass* StaticClass<AMtInteractableListenerBase>()
	{
		return AMtInteractableListenerBase::StaticClass();
	}

	void AMtInteractableListenerBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsActive(TEXT("IsActive"));

		const bool bIsValid = true
			&& Name_IsActive == ClassReps[(int32)ENetFields_Private::IsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMtInteractableListenerBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMtInteractableListenerBase);
	AMtInteractableListenerBase::~AMtInteractableListenerBase() {}
	struct Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMtInteractableListenerBase, AMtInteractableListenerBase::StaticClass, TEXT("AMtInteractableListenerBase"), &Z_Registration_Info_UClass_AMtInteractableListenerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMtInteractableListenerBase), 1858767632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_1084149381(TEXT("/Script/Multiplayer"),
		Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
