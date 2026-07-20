// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrossyRoad_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	CROSSYROAD_API UFunction* Z_Construct_UDelegateFunction_CrossyRoad_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CrossyRoad;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CrossyRoad()
	{
		if (!Z_Registration_Info_UPackage__Script_CrossyRoad.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_CrossyRoad_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/CrossyRoad",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xEFA4BE11,
			0x65BCED42,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CrossyRoad.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_CrossyRoad.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CrossyRoad(Z_Construct_UPackage__Script_CrossyRoad, TEXT("/Script/CrossyRoad"), Z_Registration_Info_UPackage__Script_CrossyRoad, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEFA4BE11, 0x65BCED42));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
