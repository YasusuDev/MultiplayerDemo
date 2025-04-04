// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Multiplayer/Public/Actors/MtInteractableBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMtInteractableBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MULTIPLAYER_API UClass* Z_Construct_UClass_AMtInteractableBase();
	MULTIPLAYER_API UClass* Z_Construct_UClass_AMtInteractableBase_NoRegister();
	MULTIPLAYER_API UFunction* Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Multiplayer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics
	{
		struct _Script_Multiplayer_eventOnInteractableStateChanged_Parms
		{
			bool bIsActive;
		};
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((_Script_Multiplayer_eventOnInteractableStateChanged_Parms*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Multiplayer_eventOnInteractableStateChanged_Parms), &Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::NewProp_bIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Multiplayer, nullptr, "OnInteractableStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::_Script_Multiplayer_eventOnInteractableStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::_Script_Multiplayer_eventOnInteractableStateChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Multiplayer_OnInteractableStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteractableStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInteractableStateChanged, bool bIsActive)
{
	struct _Script_Multiplayer_eventOnInteractableStateChanged_Parms
	{
		bool bIsActive;
	};
	_Script_Multiplayer_eventOnInteractableStateChanged_Parms Parms;
	Parms.bIsActive=bIsActive ? true : false;
	OnInteractableStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AMtInteractableBase::execGetCanInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanInteract(Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMtInteractableBase::execGetIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMtInteractableBase::execOnToggleActive)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnToggleActive_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMtInteractableBase::execToggleActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMtInteractableBase::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	struct MtInteractableBase_eventOnToggleActive_Parms
	{
		bool Value;
	};
	static FName NAME_AMtInteractableBase_OnToggleActive = FName(TEXT("OnToggleActive"));
	void AMtInteractableBase::OnToggleActive(bool Value)
	{
		MtInteractableBase_eventOnToggleActive_Parms Parms;
		Parms.Value=Value ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMtInteractableBase_OnToggleActive),&Parms);
	}
	void AMtInteractableBase::StaticRegisterNativesAMtInteractableBase()
	{
		UClass* Class = AMtInteractableBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanInteract", &AMtInteractableBase::execGetCanInteract },
			{ "GetIsActive", &AMtInteractableBase::execGetIsActive },
			{ "OnRep_IsActive", &AMtInteractableBase::execOnRep_IsActive },
			{ "OnToggleActive", &AMtInteractableBase::execOnToggleActive },
			{ "ToggleActive", &AMtInteractableBase::execToggleActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics
	{
		struct MtInteractableBase_eventGetCanInteract_Parms
		{
			AActor* OtherActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MtInteractableBase_eventGetCanInteract_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MtInteractableBase_eventGetCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MtInteractableBase_eventGetCanInteract_Parms), &Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable|HelperFunctions" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableBase, nullptr, "GetCanInteract", nullptr, nullptr, Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::MtInteractableBase_eventGetCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::MtInteractableBase_eventGetCanInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMtInteractableBase_GetCanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableBase_GetCanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics
	{
		struct MtInteractableBase_eventGetIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MtInteractableBase_eventGetIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MtInteractableBase_eventGetIsActive_Parms), &Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable|HelperFunctions" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableBase, nullptr, "GetIsActive", nullptr, nullptr, Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::MtInteractableBase_eventGetIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::MtInteractableBase_eventGetIsActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMtInteractableBase_GetIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableBase_GetIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableBase, nullptr, "OnRep_IsActive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics
	{
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((MtInteractableBase_eventOnToggleActive_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MtInteractableBase_eventOnToggleActive_Parms), &Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractableBaseEvent" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableBase, nullptr, "OnToggleActive", nullptr, nullptr, Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::PropPointers), sizeof(MtInteractableBase_eventOnToggleActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(MtInteractableBase_eventOnToggleActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMtInteractableBase_OnToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableBase_OnToggleActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMtInteractableBase_ToggleActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMtInteractableBase_ToggleActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractableBase|Funtions" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMtInteractableBase_ToggleActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMtInteractableBase, nullptr, "ToggleActive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMtInteractableBase_ToggleActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMtInteractableBase_ToggleActive_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMtInteractableBase_ToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMtInteractableBase_ToggleActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMtInteractableBase);
	UClass* Z_Construct_UClass_AMtInteractableBase_NoRegister()
	{
		return AMtInteractableBase::StaticClass();
	}
	struct Z_Construct_UClass_AMtInteractableBase_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMtInteractableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Multiplayer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMtInteractableBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMtInteractableBase_GetCanInteract, "GetCanInteract" }, // 1798692126
		{ &Z_Construct_UFunction_AMtInteractableBase_GetIsActive, "GetIsActive" }, // 1355655107
		{ &Z_Construct_UFunction_AMtInteractableBase_OnRep_IsActive, "OnRep_IsActive" }, // 3676730194
		{ &Z_Construct_UFunction_AMtInteractableBase_OnToggleActive, "OnToggleActive" }, // 2065578959
		{ &Z_Construct_UFunction_AMtInteractableBase_ToggleActive, "ToggleActive" }, // 3719140232
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMtInteractableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/MtInteractableBase.h" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_bShouldActivateOnce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InteractableSettings" },
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	void Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_bShouldActivateOnce_SetBit(void* Obj)
	{
		((AMtInteractableBase*)Obj)->bShouldActivateOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_bShouldActivateOnce = { "bShouldActivateOnce", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMtInteractableBase), &Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_bShouldActivateOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_bShouldActivateOnce_MetaData), Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_bShouldActivateOnce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_IsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Actors/MtInteractableBase.h" },
	};
#endif
	void Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((AMtInteractableBase*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_IsActive = { "IsActive", "OnRep_IsActive", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMtInteractableBase), &Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_IsActive_MetaData), Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_IsActive_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMtInteractableBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_bShouldActivateOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMtInteractableBase_Statics::NewProp_IsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMtInteractableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMtInteractableBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMtInteractableBase_Statics::ClassParams = {
		&AMtInteractableBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMtInteractableBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMtInteractableBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMtInteractableBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMtInteractableBase()
	{
		if (!Z_Registration_Info_UClass_AMtInteractableBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMtInteractableBase.OuterSingleton, Z_Construct_UClass_AMtInteractableBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMtInteractableBase.OuterSingleton;
	}
	template<> MULTIPLAYER_API UClass* StaticClass<AMtInteractableBase>()
	{
		return AMtInteractableBase::StaticClass();
	}

	void AMtInteractableBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsActive(TEXT("IsActive"));

		const bool bIsValid = true
			&& Name_IsActive == ClassReps[(int32)ENetFields_Private::IsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMtInteractableBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMtInteractableBase);
	AMtInteractableBase::~AMtInteractableBase() {}
	struct Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMtInteractableBase, AMtInteractableBase::StaticClass, TEXT("AMtInteractableBase"), &Z_Registration_Info_UClass_AMtInteractableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMtInteractableBase), 3451920751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_3141463030(TEXT("/Script/Multiplayer"),
		Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
