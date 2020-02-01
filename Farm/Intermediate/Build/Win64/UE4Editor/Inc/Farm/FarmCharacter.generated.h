// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARM_FarmCharacter_generated_h
#error "FarmCharacter.generated.h already included, missing '#pragma once' in FarmCharacter.h"
#endif
#define FARM_FarmCharacter_generated_h

#define Farm_Source_Farm_FarmCharacter_h_12_SPARSE_DATA
#define Farm_Source_Farm_FarmCharacter_h_12_RPC_WRAPPERS
#define Farm_Source_Farm_FarmCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Farm_Source_Farm_FarmCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmCharacter(); \
	friend struct Z_Construct_UClass_AFarmCharacter_Statics; \
public: \
	DECLARE_CLASS(AFarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm"), NO_API) \
	DECLARE_SERIALIZER(AFarmCharacter)


#define Farm_Source_Farm_FarmCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFarmCharacter(); \
	friend struct Z_Construct_UClass_AFarmCharacter_Statics; \
public: \
	DECLARE_CLASS(AFarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm"), NO_API) \
	DECLARE_SERIALIZER(AFarmCharacter)


#define Farm_Source_Farm_FarmCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFarmCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFarmCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFarmCharacter(AFarmCharacter&&); \
	NO_API AFarmCharacter(const AFarmCharacter&); \
public:


#define Farm_Source_Farm_FarmCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFarmCharacter(AFarmCharacter&&); \
	NO_API AFarmCharacter(const AFarmCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmCharacter)


#define Farm_Source_Farm_FarmCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFarmCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFarmCharacter, FollowCamera); }


#define Farm_Source_Farm_FarmCharacter_h_9_PROLOG
#define Farm_Source_Farm_FarmCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Farm_Source_Farm_FarmCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Farm_Source_Farm_FarmCharacter_h_12_SPARSE_DATA \
	Farm_Source_Farm_FarmCharacter_h_12_RPC_WRAPPERS \
	Farm_Source_Farm_FarmCharacter_h_12_INCLASS \
	Farm_Source_Farm_FarmCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Farm_Source_Farm_FarmCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Farm_Source_Farm_FarmCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Farm_Source_Farm_FarmCharacter_h_12_SPARSE_DATA \
	Farm_Source_Farm_FarmCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Farm_Source_Farm_FarmCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Farm_Source_Farm_FarmCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARM_API UClass* StaticClass<class AFarmCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Farm_Source_Farm_FarmCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
