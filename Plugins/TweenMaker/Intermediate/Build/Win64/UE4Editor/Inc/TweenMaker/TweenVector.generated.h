// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
struct FHitResult;
class UPrimitiveComponent;
#ifdef TWEENMAKER_TweenVector_generated_h
#error "TweenVector.generated.h already included, missing '#pragma once' in TweenVector.h"
#endif
#define TWEENMAKER_TweenVector_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execOnActorBeginOverlap); \
	DECLARE_FUNCTION(execOnActorHit); \
	DECLARE_FUNCTION(execOnPrimitiveComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnPrimitiveComponentHit);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execOnActorBeginOverlap); \
	DECLARE_FUNCTION(execOnActorHit); \
	DECLARE_FUNCTION(execOnPrimitiveComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnPrimitiveComponentHit);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTweenVector(); \
	friend struct Z_Construct_UClass_UTweenVector_Statics; \
public: \
	DECLARE_CLASS(UTweenVector, UBaseTween, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVector)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTweenVector(); \
	friend struct Z_Construct_UClass_UTweenVector_Statics; \
public: \
	DECLARE_CLASS(UTweenVector, UBaseTween, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UTweenVector)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTweenVector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTweenVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVector(UTweenVector&&); \
	NO_API UTweenVector(const UTweenVector&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTweenVector(UTweenVector&&); \
	NO_API UTweenVector(const UTweenVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTweenVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTweenVector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTweenVector)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_PRIVATE_PROPERTY_OFFSET
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_16_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UTweenVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_TweenVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
