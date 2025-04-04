// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/MtInteractableListenerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYER_MtInteractableListenerBase_generated_h
#error "MtInteractableListenerBase.generated.h already included, missing '#pragma once' in MtInteractableListenerBase.h"
#endif
#define MULTIPLAYER_MtInteractableListenerBase_generated_h

#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_SPARSE_DATA
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnToggleActive_Implementation(bool Value); \
 \
	DECLARE_FUNCTION(execOnToggleActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execOnInteractableStateChanged); \
	DECLARE_FUNCTION(execOnRep_IsActive);


#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_ACCESSORS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_CALLBACK_WRAPPERS
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMtInteractableListenerBase(); \
	friend struct Z_Construct_UClass_AMtInteractableListenerBase_Statics; \
public: \
	DECLARE_CLASS(AMtInteractableListenerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMtInteractableListenerBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMtInteractableListenerBase(AMtInteractableListenerBase&&); \
	NO_API AMtInteractableListenerBase(const AMtInteractableListenerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMtInteractableListenerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMtInteractableListenerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMtInteractableListenerBase) \
	NO_API virtual ~AMtInteractableListenerBase();


#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_7_PROLOG
#define FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_SPARSE_DATA \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_ACCESSORS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_CALLBACK_WRAPPERS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYER_API UClass* StaticClass<class AMtInteractableListenerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_Multiplayer_Source_Multiplayer_Public_Actors_MtInteractableListenerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
