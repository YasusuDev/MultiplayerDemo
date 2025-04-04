// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/MtInteractableBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MULTIPLAYER_MtInteractableBase_generated_h
#error "MtInteractableBase.generated.h already included, missing '#pragma once' in MtInteractableBase.h"
#endif
#define MULTIPLAYER_MtInteractableBase_generated_h

#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_7_DELEGATE \
MULTIPLAYER_API void FOnInteractableStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInteractableStateChanged, bool bIsActive);


#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_SPARSE_DATA
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnToggleActive_Implementation(bool Value); \
 \
	DECLARE_FUNCTION(execGetCanInteract); \
	DECLARE_FUNCTION(execGetIsActive); \
	DECLARE_FUNCTION(execOnToggleActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execOnRep_IsActive);


#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_ACCESSORS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_CALLBACK_WRAPPERS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMtInteractableBase(); \
	friend struct Z_Construct_UClass_AMtInteractableBase_Statics; \
public: \
	DECLARE_CLASS(AMtInteractableBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMtInteractableBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMtInteractableBase(AMtInteractableBase&&); \
	NO_API AMtInteractableBase(const AMtInteractableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMtInteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMtInteractableBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMtInteractableBase) \
	NO_API virtual ~AMtInteractableBase();


#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_9_PROLOG
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_SPARSE_DATA \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_ACCESSORS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_CALLBACK_WRAPPERS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYER_API UClass* StaticClass<class AMtInteractableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
