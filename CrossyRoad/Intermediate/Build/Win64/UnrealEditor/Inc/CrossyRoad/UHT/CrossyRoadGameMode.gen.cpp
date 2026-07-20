// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossyRoadGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCrossyRoadGameMode() {}

// ********** Begin Cross Module References ********************************************************
CROSSYROAD_API UClass* Z_Construct_UClass_ACrossyRoadGameMode();
CROSSYROAD_API UClass* Z_Construct_UClass_ACrossyRoadGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CrossyRoad();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACrossyRoadGameMode ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACrossyRoadGameMode;
UClass* ACrossyRoadGameMode::GetPrivateStaticClass()
{
	using TClass = ACrossyRoadGameMode;
	if (!Z_Registration_Info_UClass_ACrossyRoadGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CrossyRoadGameMode"),
			Z_Registration_Info_UClass_ACrossyRoadGameMode.InnerSingleton,
			StaticRegisterNativesACrossyRoadGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACrossyRoadGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACrossyRoadGameMode_NoRegister()
{
	return ACrossyRoadGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACrossyRoadGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CrossyRoadGameMode.h" },
		{ "ModuleRelativePath", "CrossyRoadGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ACrossyRoadGameMode constinit property declarations **********************
// ********** End Class ACrossyRoadGameMode constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossyRoadGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACrossyRoadGameMode_Statics
UObject* (*const Z_Construct_UClass_ACrossyRoadGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CrossyRoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACrossyRoadGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACrossyRoadGameMode_Statics::ClassParams = {
	&ACrossyRoadGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACrossyRoadGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACrossyRoadGameMode_Statics::Class_MetaDataParams)
};
void ACrossyRoadGameMode::StaticRegisterNativesACrossyRoadGameMode()
{
}
UClass* Z_Construct_UClass_ACrossyRoadGameMode()
{
	if (!Z_Registration_Info_UClass_ACrossyRoadGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrossyRoadGameMode.OuterSingleton, Z_Construct_UClass_ACrossyRoadGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACrossyRoadGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACrossyRoadGameMode);
ACrossyRoadGameMode::~ACrossyRoadGameMode() {}
// ********** End Class ACrossyRoadGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h__Script_CrossyRoad_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACrossyRoadGameMode, ACrossyRoadGameMode::StaticClass, TEXT("ACrossyRoadGameMode"), &Z_Registration_Info_UClass_ACrossyRoadGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrossyRoadGameMode), 2575563268U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h__Script_CrossyRoad_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h__Script_CrossyRoad_4072301871{
	TEXT("/Script/CrossyRoad"),
	Z_CompiledInDeferFile_FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h__Script_CrossyRoad_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Utente_crossyroad_CrossyRoad_Source_CrossyRoad_CrossyRoadGameMode_h__Script_CrossyRoad_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
