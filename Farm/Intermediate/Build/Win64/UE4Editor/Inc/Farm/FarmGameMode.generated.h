// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARM_FarmGameMode_generated_h
#error "FarmGameMode.generated.h already included, missing '#pragma once' in FarmGameMode.h"
#endif
#define FARM_FarmGameMode_generated_h

#define Farm_Source_Farm_FarmGameMode_h_12_SPARSE_DATA
#define Farm_Source_Farm_FarmGameMode_h_12_RPC_WRAPPERS
#define Farm_Source_Farm_FarmGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Farm_Source_Farm_FarmGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmGameMode(); \
	friend struct Z_Construct_UClass_AFarmGameMode_Statics; \
public: \
	DECLARE_CLASS(AFarmGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm"), FARM_API) \
	DECLARE_SERIALIZER(AFarmGameMode)


#define Farm_Source_Farm_FarmGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFarmGameMode(); \
	friend struct Z_Construct_UClass_AFarmGameMode_Statics; \
public: \
	DECLARE_CLASS(AFarmGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm"), FARM_API) \
	DECLARE_SERIALIZER(AFarmGameMode)


#define Farm_Source_Farm_FarmGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FARM_API AFarmGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFarmGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FARM_API, AFarmGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FARM_API AFarmGameMode(AFarmGameMode&&); \
	FARM_API AFarmGameMode(const AFarmGameMode&); \
public:


#define Farm_Source_Farm_FarmGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FARM_API AFarmGameMode(AFarmGameMode&&); \
	FARM_API AFarmGameMode(const AFarmGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FARM_API, AFarmGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmGameMode)


#define Farm_Source_Farm_FarmGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Farm_Source_Farm_FarmGameMode_h_9_PROLOG
#define Farm_Source_Farm_FarmGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Farm_Source_Farm_FarmGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Farm_Source_Farm_FarmGameMode_h_12_SPARSE_DATA \
	Farm_Source_Farm_FarmGameMode_h_12_RPC_WRAPPERS \
	Farm_Source_Farm_FarmGameMode_h_12_INCLASS \
	Farm_Source_Farm_FarmGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Farm_Source_Farm_FarmGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Farm_Source_Farm_FarmGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Farm_Source_Farm_FarmGameMode_h_12_SPARSE_DATA \
	Farm_Source_Farm_FarmGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Farm_Source_Farm_FarmGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Farm_Source_Farm_FarmGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FARM_API UClass* StaticClass<class AFarmGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Farm_Source_Farm_FarmGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
