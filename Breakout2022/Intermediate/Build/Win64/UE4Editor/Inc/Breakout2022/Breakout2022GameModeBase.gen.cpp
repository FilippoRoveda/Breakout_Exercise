// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakout2022/Breakout2022GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakout2022GameModeBase() {}
// Cross Module References
	BREAKOUT2022_API UClass* Z_Construct_UClass_ABreakout2022GameModeBase_NoRegister();
	BREAKOUT2022_API UClass* Z_Construct_UClass_ABreakout2022GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Breakout2022();
// End Cross Module References
	void ABreakout2022GameModeBase::StaticRegisterNativesABreakout2022GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABreakout2022GameModeBase_NoRegister()
	{
		return ABreakout2022GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABreakout2022GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakout2022GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakout2022,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakout2022GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Breakout2022GameModeBase.h" },
		{ "ModuleRelativePath", "Breakout2022GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakout2022GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakout2022GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreakout2022GameModeBase_Statics::ClassParams = {
		&ABreakout2022GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABreakout2022GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakout2022GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreakout2022GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABreakout2022GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABreakout2022GameModeBase, 561159519);
	template<> BREAKOUT2022_API UClass* StaticClass<ABreakout2022GameModeBase>()
	{
		return ABreakout2022GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreakout2022GameModeBase(Z_Construct_UClass_ABreakout2022GameModeBase, &ABreakout2022GameModeBase::StaticClass, TEXT("/Script/Breakout2022"), TEXT("ABreakout2022GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakout2022GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
