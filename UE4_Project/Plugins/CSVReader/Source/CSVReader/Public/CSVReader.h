// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

typedef float* (*CSVColumnDataFuncPtr)(const char*, const char*, int&);

class FCSVReaderModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static inline FCSVReaderModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FCSVReaderModule>("CSVReader");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("CSVReaderLibrary");
	}


	float* GetColumnDataFromCSV(const char* fileName, const char* columnName, int& arrSize);

private:
	/** Handle to the test dll we will load */
	void* CSVLibraryHandle;

	CSVColumnDataFuncPtr GetCSVColumnData;
};
