// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionAdventure/AbilitySystem/Attributes/AADamageAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAADamageAttributeSet() {}
// Cross Module References
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_UAADamageAttributeSet();
	ACTIONADVENTURE_API UClass* Z_Construct_UClass_UAADamageAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_ActionAdventure();
// End Cross Module References
	void UAADamageAttributeSet::StaticRegisterNativesUAADamageAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAADamageAttributeSet);
	UClass* Z_Construct_UClass_UAADamageAttributeSet_NoRegister()
	{
		return UAADamageAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAADamageAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAADamageAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionAdventure,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAADamageAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAADamageAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/Attributes/AADamageAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AADamageAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAADamageAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "AADamageAttributeSet" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/AADamageAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAADamageAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAADamageAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAADamageAttributeSet_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_UAADamageAttributeSet_Statics::NewProp_Damage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAADamageAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAADamageAttributeSet_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAADamageAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAADamageAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAADamageAttributeSet_Statics::ClassParams = {
		&UAADamageAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAADamageAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAADamageAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAADamageAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAADamageAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAADamageAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAADamageAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UAADamageAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAADamageAttributeSet.OuterSingleton, Z_Construct_UClass_UAADamageAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAADamageAttributeSet.OuterSingleton;
	}
	template<> ACTIONADVENTURE_API UClass* StaticClass<UAADamageAttributeSet>()
	{
		return UAADamageAttributeSet::StaticClass();
	}
	UAADamageAttributeSet::UAADamageAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAADamageAttributeSet);
	UAADamageAttributeSet::~UAADamageAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AADamageAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AADamageAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAADamageAttributeSet, UAADamageAttributeSet::StaticClass, TEXT("UAADamageAttributeSet"), &Z_Registration_Info_UClass_UAADamageAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAADamageAttributeSet), 2900476087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AADamageAttributeSet_h_4211319307(TEXT("/Script/ActionAdventure"),
		Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AADamageAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionAdventure_Source_ActionAdventure_AbilitySystem_Attributes_AADamageAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
