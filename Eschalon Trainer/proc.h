#pragma once
#include <vector>
#include <Windows.h>
#include <TlHelp32.h>
//code ripped from GuidedHacking
//Function Declarations
DWORD GetProcId(const wchar_t* procName); //Get Process name

uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName); //get base address of the game

uintptr_t FindDymanicMemoryAddress(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets);//get dynamic memory address of game on runtime