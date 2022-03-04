#include "proc.h"
#include <tchar.h>
#include <vector>
#include <Windows.h>
#include <TlHelp32.h>

DWORD GetProcId(const wchar_t* procName) {
	
	DWORD procID = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); //Gets a snapshot of all processes
	if (hSnap != INVALID_HANDLE_VALUE) { //if snapshot does not fail
		
		PROCESSENTRY32 procEntry; //all process id in unicode
		
		procEntry.dwSize = sizeof(procEntry);//checks the size of
		if (Process32First(hSnap, &procEntry)) { // gets first process in snapshot
			
			do {

				if (!_wcsicmp(procEntry.szExeFile, procName)) {//compares process name with snapshot without case sensitivity

					procID = procEntry.th32ProcessID;//process found
					break;
				}

			}
			while (Process32Next(hSnap, &procEntry));//loops all process in procEntry &procEntry= Address of procEntry
		}
	}
	CloseHandle(hSnap);
	return procID;//process ID returned for auto attachment

}

uintptr_t GetModuleBaseAddress(DWORD procID, const wchar_t* modName) {

	uintptr_t modBaseAddress = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32,procID);//gets 32bit & 64bit modules
	if (hSnap != INVALID_HANDLE_VALUE) {

		MODULEENTRY32 modEntry;
		modEntry.dwSize = sizeof(modEntry);
		if (Module32First(hSnap, &modEntry)) {

			do {
				if (!_wcsicmp(modEntry.szModule, modName)) {

					modBaseAddress = (uintptr_t)modEntry.modBaseAddr;//modBaseAddr is a Byte pointer found in moduleentry32 function
					break;
				}

			} while (Module32Next(hSnap, &modEntry));
		}

	}
	CloseHandle(hSnap);
	return modBaseAddress;
}


uintptr_t FindDymanicMemoryAddress(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets) {

	uintptr_t addr = ptr;
	for (unsigned int i = 0; i < offsets.size(); i++) {

		ReadProcessMemory(hProc, (BYTE*)addr, &addr, sizeof(addr), 0);
		addr += offsets[i];
	}
	return addr;
}