// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrossyRoadPlayerController.h"

#ifdef CROSSYROAD_CrossyRoadPlayerController_generated_h
#error "CrossyRoadPlayerController.generated.h already included, missing '#pragma once' in CrossyRoadPlayerController.h"
#endif
#define CROSSYROAD_CrossyRoadPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACrossyRoadPlayerController **********************************************
struct Z_Construct_UClass_ACrossyRoadPlayerController_Statics;
CROSSYROAD_API UClass* Z_Construct_UClass_ACrossyRoadPlayerController_NoRegister();

#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossyRoadPlayerController(); \
	friend struct ::Z_Construct_UClass_ACrossyRoadPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSYROAD_API UClass* ::Z_Construct_UClass_ACrossyRoadPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACrossyRoadPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossyRoad"), Z_Construct_UClass_ACrossyRoadPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACrossyRoadPlayerController)


#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrossyRoadPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACrossyRoadPlayerController(ACrossyRoadPlayerController&&) = delete; \
	ACrossyRoadPlayerController(const ACrossyRoadPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossyRoadPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossyRoadPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrossyRoadPlayerController) \
	NO_API virtual ~ACrossyRoadPlayerController();


#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadPlayerController_h_16_PROLOG
#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACrossyRoadPlayerController;

// ********** End Class ACrossyRoadPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
