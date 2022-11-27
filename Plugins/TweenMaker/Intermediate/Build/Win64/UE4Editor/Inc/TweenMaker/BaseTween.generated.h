// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USplineComponent;
enum class ETweenEaseType : uint8;
enum class ETweenLoopType : uint8;
class UTweenFloat;
class UObject;
struct FVector;
class UTweenVector;
struct FVector2D;
class UTweenVector2D;
class UMaterialInstanceDynamic;
struct FLinearColor;
class UTweenLinearColor;
class USceneComponent;
class UWidget;
enum class ETweenReferenceAxis : uint8;
struct FRotator;
class UTweenRotator;
class UTweenContainer;
class UCurveFloat;
#ifdef TWEENMAKER_BaseTween_generated_h
#error "BaseTween.generated.h already included, missing '#pragma once' in BaseTween.h"
#endif
#define TWEENMAKER_BaseTween_generated_h

#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_SPARSE_DATA
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAppendTweenActorFollowSpline); \
	DECLARE_FUNCTION(execAppendTweenCustomFloat); \
	DECLARE_FUNCTION(execAppendTweenCustomVector); \
	DECLARE_FUNCTION(execAppendTweenCustomVector2D); \
	DECLARE_FUNCTION(execAppendTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execAppendTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execAppendTweenMaterialVectorFromTo); \
	DECLARE_FUNCTION(execAppendTweenMaterialVectorTo); \
	DECLARE_FUNCTION(execAppendTweenMoveActorBy); \
	DECLARE_FUNCTION(execAppendTweenMoveActorTo); \
	DECLARE_FUNCTION(execAppendTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execAppendTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execAppendTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execAppendTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execAppendTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execAppendTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execAppendTweenRotateActorBy); \
	DECLARE_FUNCTION(execAppendTweenRotateActorTo); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execAppendTweenScaleActorBy); \
	DECLARE_FUNCTION(execAppendTweenScaleActorTo); \
	DECLARE_FUNCTION(execAppendTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execAppendTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execAppendTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execAppendTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execAppendTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execAppendTweenShearWidgetTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetColorFromTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetColorTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execDeleteTween); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execGetTweenContainer); \
	DECLARE_FUNCTION(execGetTweenDuration); \
	DECLARE_FUNCTION(execGetTweenElapsedTime); \
	DECLARE_FUNCTION(execGetTweenName); \
	DECLARE_FUNCTION(execGetTweenTarget); \
	DECLARE_FUNCTION(execIsTweening); \
	DECLARE_FUNCTION(execIsTweenPaused); \
	DECLARE_FUNCTION(execJoinTweenActorFollowSpline); \
	DECLARE_FUNCTION(execJoinTweenCustomFloat); \
	DECLARE_FUNCTION(execJoinTweenCustomVector); \
	DECLARE_FUNCTION(execJoinTweenCustomVector2D); \
	DECLARE_FUNCTION(execJoinTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execJoinTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execJoinTweenMaterialVectorFromTo); \
	DECLARE_FUNCTION(execJoinTweenMaterialVectorTo); \
	DECLARE_FUNCTION(execJoinTweenMoveActorBy); \
	DECLARE_FUNCTION(execJoinTweenMoveActorTo); \
	DECLARE_FUNCTION(execJoinTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execJoinTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execJoinTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execJoinTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execJoinTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execJoinTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execJoinTweenRotateActorBy); \
	DECLARE_FUNCTION(execJoinTweenRotateActorTo); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execJoinTweenScaleActorBy); \
	DECLARE_FUNCTION(execJoinTweenScaleActorTo); \
	DECLARE_FUNCTION(execJoinTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execJoinTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execJoinTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execJoinTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execJoinTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execJoinTweenShearWidgetTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetColorFromTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetColorTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execPauseTween); \
	DECLARE_FUNCTION(execRestartTween); \
	DECLARE_FUNCTION(execResumeTween); \
	DECLARE_FUNCTION(execSetCustomEasisng); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetTweenName); \
	DECLARE_FUNCTION(execTogglePauseTween);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAppendTweenActorFollowSpline); \
	DECLARE_FUNCTION(execAppendTweenCustomFloat); \
	DECLARE_FUNCTION(execAppendTweenCustomVector); \
	DECLARE_FUNCTION(execAppendTweenCustomVector2D); \
	DECLARE_FUNCTION(execAppendTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execAppendTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execAppendTweenMaterialVectorFromTo); \
	DECLARE_FUNCTION(execAppendTweenMaterialVectorTo); \
	DECLARE_FUNCTION(execAppendTweenMoveActorBy); \
	DECLARE_FUNCTION(execAppendTweenMoveActorTo); \
	DECLARE_FUNCTION(execAppendTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execAppendTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execAppendTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execAppendTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execAppendTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execAppendTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execAppendTweenRotateActorBy); \
	DECLARE_FUNCTION(execAppendTweenRotateActorTo); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execAppendTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execAppendTweenScaleActorBy); \
	DECLARE_FUNCTION(execAppendTweenScaleActorTo); \
	DECLARE_FUNCTION(execAppendTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execAppendTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execAppendTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execAppendTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execAppendTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execAppendTweenShearWidgetTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetColorFromTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetColorTo); \
	DECLARE_FUNCTION(execAppendTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execDeleteTween); \
	DECLARE_FUNCTION(execGetTimeScale); \
	DECLARE_FUNCTION(execGetTweenContainer); \
	DECLARE_FUNCTION(execGetTweenDuration); \
	DECLARE_FUNCTION(execGetTweenElapsedTime); \
	DECLARE_FUNCTION(execGetTweenName); \
	DECLARE_FUNCTION(execGetTweenTarget); \
	DECLARE_FUNCTION(execIsTweening); \
	DECLARE_FUNCTION(execIsTweenPaused); \
	DECLARE_FUNCTION(execJoinTweenActorFollowSpline); \
	DECLARE_FUNCTION(execJoinTweenCustomFloat); \
	DECLARE_FUNCTION(execJoinTweenCustomVector); \
	DECLARE_FUNCTION(execJoinTweenCustomVector2D); \
	DECLARE_FUNCTION(execJoinTweenMaterialFloatFromTo); \
	DECLARE_FUNCTION(execJoinTweenMaterialFloatTo); \
	DECLARE_FUNCTION(execJoinTweenMaterialVectorFromTo); \
	DECLARE_FUNCTION(execJoinTweenMaterialVectorTo); \
	DECLARE_FUNCTION(execJoinTweenMoveActorBy); \
	DECLARE_FUNCTION(execJoinTweenMoveActorTo); \
	DECLARE_FUNCTION(execJoinTweenMoveSceneComponentBy); \
	DECLARE_FUNCTION(execJoinTweenMoveSceneComponentTo); \
	DECLARE_FUNCTION(execJoinTweenMoveWidgetBy); \
	DECLARE_FUNCTION(execJoinTweenMoveWidgetTo); \
	DECLARE_FUNCTION(execJoinTweenRotateActorAroundPoint); \
	DECLARE_FUNCTION(execJoinTweenRotateActorAroundPointByOffset); \
	DECLARE_FUNCTION(execJoinTweenRotateActorBy); \
	DECLARE_FUNCTION(execJoinTweenRotateActorTo); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentAroundPoint); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentAroundPointByOffset); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentBy); \
	DECLARE_FUNCTION(execJoinTweenRotateSceneComponentTo); \
	DECLARE_FUNCTION(execJoinTweenScaleActorBy); \
	DECLARE_FUNCTION(execJoinTweenScaleActorTo); \
	DECLARE_FUNCTION(execJoinTweenScaleSceneComponentBy); \
	DECLARE_FUNCTION(execJoinTweenScaleSceneComponentTo); \
	DECLARE_FUNCTION(execJoinTweenScaleWidgetBy); \
	DECLARE_FUNCTION(execJoinTweenScaleWidgetTo); \
	DECLARE_FUNCTION(execJoinTweenSceneComponentFollowSpline); \
	DECLARE_FUNCTION(execJoinTweenShearWidgetTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetAngleTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetColorFromTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetColorTo); \
	DECLARE_FUNCTION(execJoinTweenWidgetOpacityTo); \
	DECLARE_FUNCTION(execPauseTween); \
	DECLARE_FUNCTION(execRestartTween); \
	DECLARE_FUNCTION(execResumeTween); \
	DECLARE_FUNCTION(execSetCustomEasisng); \
	DECLARE_FUNCTION(execSetDelay); \
	DECLARE_FUNCTION(execSetTimeScale); \
	DECLARE_FUNCTION(execSetTweenName); \
	DECLARE_FUNCTION(execTogglePauseTween);


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseTween(); \
	friend struct Z_Construct_UClass_UBaseTween_Statics; \
public: \
	DECLARE_CLASS(UBaseTween, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UBaseTween)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUBaseTween(); \
	friend struct Z_Construct_UClass_UBaseTween_Statics; \
public: \
	DECLARE_CLASS(UBaseTween, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TweenMaker"), NO_API) \
	DECLARE_SERIALIZER(UBaseTween)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseTween(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseTween) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTween); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTween); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTween(UBaseTween&&); \
	NO_API UBaseTween(const UBaseTween&); \
public:


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTween(UBaseTween&&); \
	NO_API UBaseTween(const UBaseTween&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTween); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTween); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseTween)


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCurveFloat() { return STRUCT_OFFSET(UBaseTween, mCurveFloat); } \
	FORCEINLINE static uint32 __PPO__mOwningTweenContainer() { return STRUCT_OFFSET(UBaseTween, mOwningTweenContainer); }


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_26_PROLOG
#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_RPC_WRAPPERS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_INCLASS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_PRIVATE_PROPERTY_OFFSET \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_SPARSE_DATA \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_INCLASS_NO_PURE_DECLS \
	GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWEENMAKER_API UClass* StaticClass<class UBaseTween>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GenProj_Plugins_TweenMaker_Source_TweenMaker_Public_BaseTween_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
