// DllMain.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"

//-------------------------------------------------------------------------------------
// Name: DllMain()
// Desc: The DLL application's entry point
//-------------------------------------------------------------------------------------
BOOL APIENTRY DllMain(HMODULE in_module, DWORD in_reason, LPVOID in_reserved)
{
	switch (in_reason)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_PROCESS_DETACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
			break;
	}

	return TRUE;
}