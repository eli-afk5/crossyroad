// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrossyRoadCharacter.h"

#ifdef CROSSYROAD_CrossyRoadCharacter_generated_h
#error "CrossyRoadCharacter.generated.h already included, missing '#pragma once' in CrossyRoadCharacter.h"
#endif
#define CROSSYROAD_CrossyRoadCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACrossyRoadCharacter *****************************************************
#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_ACrossyRoadCharacter_Statics;
CROSSYROAD_API UClass* Z_Construct_UClass_ACrossyRoadCharacter_NoRegister();

#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrossyRoadCharacter(); \
	friend struct ::Z_Construct_UClass_ACrossyRoadCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSYROAD_API UClass* ::Z_Construct_UClass_ACrossyRoadCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACrossyRoadCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrossyRoad"), Z_Construct_UClass_ACrossyRoadCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACrossyRoadCharacter)


#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACrossyRoadCharacter(ACrossyRoadCharacter&&) = delete; \
	ACrossyRoadCharacter(const ACrossyRoadCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossyRoadCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossyRoadCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACrossyRoadCharacter) \
	NO_API virtual ~ACrossyRoadCharacter();


#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_21_PROLOG
#define FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACrossyRoadCharacter;

// ********** End Class ACrossyRoadCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
