#pragma once

#ifdef DLLCSVREADER_EXPORTS
#define CVS_DLL_EXPORT __declspec(dllexport)
#else
#define CVS_DLL_IMPORT __declspec(dllimport)
#endif

#include <vector>

extern "C" CVS_DLL_EXPORT  float* GetColumnFloatArray(const char* fileName, const char* columnName, int& sizeOfArray);
