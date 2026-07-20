// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrossyRoadGameMode.h"

#ifdef CROSSYROAD_CrossyRoadGameMode_generated_h
#error "CrossyRoadGameMode.generated.h already included, missing '#pragma once' in CrossyRoadGameMode.h"
#endif
#define CROSSYROAD_CrossyRoadGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACrossyRoadGameMode ******************************************************
struct Z_Construct_UClass_ACrossyRoadGameMode_Statics;
CROSSYROAD_API UClass* Z_Construct_UClass_ACrossyRoadGameMode_NoRegister();

#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossyRoadGameMode(); \
	friend struct ::Z_Construct_UClass_ACrossyRoadGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSYROAD_API UClass* ::Z_Construct_UClass_ACrossyRoadGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACrossyRoadGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossyRoad"), Z_Construct_UClass_ACrossyRoadGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACrossyRoadGameMode)


#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACrossyRoadGameMode(ACrossyRoadGameMode&&) = delete; \
	ACrossyRoadGameMode(const ACrossyRoadGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossyRoadGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossyRoadGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACrossyRoadGameMode) \
	NO_API virtual ~ACrossyRoadGameMode();


#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h_12_PROLOG
#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACrossyRoadGameMode;

// ********** End Class ACrossyRoadGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
