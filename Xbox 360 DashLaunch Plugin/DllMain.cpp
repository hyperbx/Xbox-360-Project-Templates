// DllMain.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"

//-------------------------------------------------------------------------------------
// Name: DllMain()
// Desc: The DLL application's entry point
//-------------------------------------------------------------------------------------
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_PROCESS_DETACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
			break;
	}

	return TRUE;
}