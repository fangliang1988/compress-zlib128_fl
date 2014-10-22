#pragma once

#ifdef USEDLL
	#ifdef DLLEXPORT
		#define DLL_API __declspec(dllexport)
	#else
		#define DLL_API __declspec(dllimport)
	#endif
#else
	#define DLL_API
#endif

#ifdef __cplusplus
extern "C" { 
#endif

DLL_API int __cdecl ZipFiles(const char* szDestPath, int bOverwrite, int bFaster, const char* pszPassword, const char*szFilePath,...);
DLL_API int __cdecl UnzipFiles(const char* szFilePath, const char* szDestPath, const char* pPassword, int bUseDir, int bOverwrite);

#ifdef __cplusplus
} 
#endif