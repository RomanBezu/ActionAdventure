// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionAdventure/AbilitySystem/Attributes/AAHealthAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAAHealthAttributeSet() {}
// Cross Module References
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_UAAHealtAttributeSet();
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_UAAHealtAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_ActionAdventure();
// End Cross Module References
	void UAAHealtAttributeSet::StaticRegisterNativesUAAHealtAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAAHealtAttributeSet);
	UClass* Z_Construct_UClass_UAAHealtAttributeSet_NoRegister()
	{
		return UAAHealtAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAAHealtAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAAHealtAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionAdventure,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAAHealtAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAHealtAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Attributes/AAHealthAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AAHealthAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "AAHealtAttributeSet" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AAHealthAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAAHealtAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AAHealtAttributeSet" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AAHealthAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAAHealtAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAAHealtAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAAHealtAttributeSet_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAAHealtAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAAHealtAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAAHealtAttributeSet_Statics::ClassParams = {
		&UAAHealtAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAAHealtAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAAHealtAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAAHealtAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAAHealtAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAAHealtAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAAHealtAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UAAHealtAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAAHealtAttributeSet.OuterSingleton, Z_Construct_UClass_UAAHealtAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAAHealtAttributeSet.OuterSingleton;
	}
	template<> ACTIONADVENTURE_API UClass* StaticClass<UAAHealtAttributeSet>()
	{
		return UAAHealtAttributeSet::StaticClass();
	}
	UAAHealtAttributeSet::UAAHealtAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAAHealtAttributeSet);
	UAAHealtAttributeSet::~UAAHealtAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAHealthAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAHealthAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAAHealtAttributeSet, UAAHealtAttributeSet::StaticClass, TEXT("UAAHealtAttributeSet"), &Z_Registration_Info_UClass_UAAHealtAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAAHealtAttributeSet), 3384494444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAHealthAttributeSet_h_2857702817(TEXT("/Script/ActionAdventure"),
		Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAHealthAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AAHealthAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
