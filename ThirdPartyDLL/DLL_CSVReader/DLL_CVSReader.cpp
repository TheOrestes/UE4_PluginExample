#include "pch.h"
#include "DLL_CVSReader.h"
#include "rapidcsv.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CVS_DLL_EXPORT float* GetColumnFloatArray(const char* fileName, const char* columnName, int& sizeOfArr)
{
	rapidcsv::Document doc(fileName);

	sizeOfArr = doc.GetColumn<float>(columnName).size();
	return doc.GetColumn<float>(columnName).data();
}
