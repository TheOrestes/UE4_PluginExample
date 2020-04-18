// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CSVREADER_CSVReaderBPLibrary_generated_h
#error "CSVReaderBPLibrary.generated.h already included, missing '#pragma once' in CSVReaderBPLibrary.h"
#endif
#define CSVREADER_CSVReaderBPLibrary_generated_h

#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColumnData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_columnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetColumnData(Z_Param_fileName,Z_Param_columnName); \
		P_NATIVE_END; \
	}


#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColumnData) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_fileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_columnName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetColumnData(Z_Param_fileName,Z_Param_columnName); \
		P_NATIVE_END; \
	}


#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSVReaderBPLibrary(); \
	friend struct Z_Construct_UClass_UCSVReaderBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UCSVReaderBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CSVReader"), NO_API) \
	DECLARE_SERIALIZER(UCSVReaderBPLibrary)


#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCSVReaderBPLibrary(); \
	friend struct Z_Construct_UClass_UCSVReaderBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UCSVReaderBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CSVReader"), NO_API) \
	DECLARE_SERIALIZER(UCSVReaderBPLibrary)


#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSVReaderBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVReaderBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSVReaderBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVReaderBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSVReaderBPLibrary(UCSVReaderBPLibrary&&); \
	NO_API UCSVReaderBPLibrary(const UCSVReaderBPLibrary&); \
public:


#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSVReaderBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSVReaderBPLibrary(UCSVReaderBPLibrary&&); \
	NO_API UCSVReaderBPLibrary(const UCSVReaderBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSVReaderBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVReaderBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVReaderBPLibrary)


#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_PRIVATE_PROPERTY_OFFSET
#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_28_PROLOG
#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_PRIVATE_PROPERTY_OFFSET \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_RPC_WRAPPERS \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_INCLASS \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_PRIVATE_PROPERTY_OFFSET \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_INCLASS_NO_PURE_DECLS \
	MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CSVReaderBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CSVREADER_API UClass* StaticClass<class UCSVReaderBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyPlugin_Plugins_CSVReader_Source_CSVReader_Public_CSVReaderBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
