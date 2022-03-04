#include <iostream>
#include "proc.h"
#include <vector>
#include <windows.h>
#include <tchar.h>



int main()
{
	DWORD procID = GetProcId(L"Eschalon Book I.exe"); //get procID of the executable

	uintptr_t moduleBase = GetModuleBaseAddress(procID, L"Eschalon Book I.exe");

	HANDLE hProcess = 0;
	hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procID);

	uintptr_t dynamicPtrBaseAddr = moduleBase + 0x001D1C38;
	std::cout << "Module Base Address at= 0x" << std::hex << moduleBase << std::endl;
	std::cout << "DynmapicPointer Base Address at= 0x" << std::hex << dynamicPtrBaseAddr << std::endl;

	std::vector<unsigned int> attributeOffset = {0x4C};
	//uintptr_t attributeAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, attributeOffset);
	//std::cout << "DynmapicPointer Attribute Address at= 0x" << std::hex << attributeAddr << std::endl;
	std::vector<unsigned int> skillOffset = { 0x50 };
	std::vector<unsigned int> playerHealthOffset = { 0x38 };
	std::vector<unsigned int> playerManaOffset = { 0x3C };
	std::vector<unsigned int> playerExperienceOffset = { 0x40 };
	std::vector<unsigned int> playerEncumbaranceOffset = { 0xD0 };

	uintptr_t attributeAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, attributeOffset);
	std::cout << "DynmapicPointer Attribute Address at= 0x" << std::hex << attributeAddr << std::endl;

	uintptr_t skillAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, skillOffset);
	std::cout << "DynmapicPointer Skill Address at= 0x" << std::hex << skillAddr << std::endl;

	uintptr_t playerHealthAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerHealthOffset);
	std::cout << "DynmapicPointer Player Health Address at= 0x" << std::hex << playerHealthAddr << std::endl;

	uintptr_t playerManaAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerManaOffset);
	std::cout << "DynmapicPointer Player Mana Address at= 0x" << std::hex << playerManaAddr << std::endl;
	
	uintptr_t playerExperienceAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerExperienceOffset);
	std::cout << "DynmapicPointer Player Exp Address at= 0x" << std::hex << playerExperienceAddr << std::endl;

	uintptr_t playerEncumbaranceAddr = FindDymanicMemoryAddress(hProcess, dynamicPtrBaseAddr, playerEncumbaranceOffset);
	std::cout << "DynmapicPointer Encumbarance Address at= 0x" << std::hex << playerEncumbaranceAddr << std::endl;

	int attributeValue = 0;
	int skillValue = 0;
	int playerHealthValue = 0;
	int playerManaValue = 0;
	int playerExperienceValue = 0;
	float playerEncumbaranceValue = 0.0;
	int newattributeValue = 0;
	int newskillValue = 0;
	int newplayerHealthValue = 0;
	int newplayerManaValue = 0;
	int newplayerExperienceValue = 0;
	float newplayerEncumbaranceValue = 0.0;

	std::cout << "Eschalon:Book I Trainer" << std::endl;
	std::cout << "---------\n";
	std::cout << "|OPTIONS|\n";
	std::cout << "---------\n";
	std::cout << "1)Read Current Attribute Value" << std::endl;
	std::cout << "2)Read Current Skill Point Value" << std::endl;
	std::cout << "3)Read Current Player Health Value" << std::endl;
	std::cout << "4)Read Current Player Mana Value" << std::endl;
	std::cout << "5)Read Current Player Experience Value" << std::endl;
	std::cout << "6)Read Current Player Encumbarance Value" << std::endl;
	std::cout << "7)Set New Attribute Value" << std::endl;
	std::cout << "8)Set New Skill Point Value" << std::endl;
	std::cout << "9)Set New Player Health Value" << std::endl;
	std::cout << "10)Set New Player Mana Value" << std::endl;
	std::cout << "11)Set New Player Experience Value" << std::endl;
	std::cout << "12)Set New Player Encumbarance Value" << std::endl;

	int option = 0;
	std::cout << "Enter Your Option [1-12]" << std::endl;
	std::cin >> option;
	while (1) {

		if (option < 1 || option > 12) {
			std::cout << "Invalid Option [1-12]" << std::endl;
			std::cin >> option;
		}
		else {

			break;
		}
	}

		switch (option) {

		case 1:
			ReadProcessMemory(hProcess, (BYTE*)attributeAddr, &attributeValue, sizeof(attributeValue), nullptr);
			std::cout << "Current Attribute Value= " << std::dec << attributeValue << std::endl;
			break;
		case 2:
			ReadProcessMemory(hProcess, (BYTE*)skillAddr, &skillValue, sizeof(skillValue), nullptr);
			std::cout << "Current Skill Value= " << std::dec << skillValue << std::endl;
			break;
		case 3:
			ReadProcessMemory(hProcess, (BYTE*)playerHealthAddr, &playerHealthValue, sizeof(playerHealthValue), nullptr);
			std::cout << "Current Player Health Value= " << std::dec << playerHealthValue << std::endl;
			system("pause");
			break;
		case 4:
			ReadProcessMemory(hProcess, (BYTE*)playerManaAddr, &playerManaValue, sizeof(playerManaValue), nullptr);
			std::cout << "Current Player Mana Value= " << std::dec << playerManaValue << std::endl;
		case 5:
			ReadProcessMemory(hProcess, (BYTE*)playerExperienceAddr, &playerExperienceValue, sizeof(playerExperienceValue), nullptr);
			std::cout << "Current Player Experience Value= " << std::dec << playerExperienceValue << std::endl;
		case 6:
			ReadProcessMemory(hProcess, (BYTE*)playerEncumbaranceAddr, &playerEncumbaranceValue, sizeof(playerEncumbaranceValue), nullptr);
			std::cout << "Current Player Encumbarance Value= " << std::dec << playerEncumbaranceValue << std::endl;
			break;
		case 7:
			std::cout << "Enter New Attribute Value :" << std::endl;
			std::cin >> newattributeValue;
			WriteProcessMemory(hProcess, (BYTE*)attributeAddr, &newattributeValue, sizeof(newattributeValue), nullptr);
			std::cout << "New Attribute Value= " << std::dec << newattributeValue << std::endl;
			break;
		case 8:
			std::cout << "Enter New Skill Value :" << std::endl;
			std::cin >> newskillValue;
			WriteProcessMemory(hProcess, (BYTE*)skillAddr, &newskillValue, sizeof(newskillValue), nullptr);
			std::cout << "New Skill Value= " << std::dec << newskillValue << std::endl;
			break;
		case 9:
			std::cout << "Enter Player Health Value :" << std::endl;
			std::cin >> newplayerHealthValue;
			WriteProcessMemory(hProcess, (BYTE*)playerHealthAddr, &newplayerHealthValue, sizeof(newplayerHealthValue), nullptr);
			std::cout << "New Player Health Value= " << std::dec << newplayerHealthValue << std::endl;
			break;
		case 10:
			std::cout << "Enter Player Mana Value :" << std::endl;
			std::cin >> newplayerManaValue;
			WriteProcessMemory(hProcess, (BYTE*)playerManaAddr, &newplayerManaValue, sizeof(newplayerManaValue), nullptr);
			std::cout << "New Player Mana Value= " << std::dec << newplayerManaValue << std::endl;
			break;
		case 11:
			std::cout << "Enter Player Experience Value :" << std::endl;
			std::cin >> newplayerExperienceValue;
			WriteProcessMemory(hProcess, (BYTE*)playerExperienceAddr, &newplayerExperienceValue, sizeof(newplayerExperienceValue), nullptr);
			std::cout << "New Player Experience Value= " << std::dec << newplayerExperienceValue << std::endl;
			break;
		case 12:
			std::cout << "Enter Player Encumbarance Value :" << std::endl;
			std::cin >> newplayerEncumbaranceValue;
			WriteProcessMemory(hProcess, (BYTE*)playerEncumbaranceAddr, &newplayerEncumbaranceValue, sizeof(newplayerEncumbaranceValue), nullptr);
			std::cout << "New Player Encumbarance Value= " << std::dec << newplayerEncumbaranceValue << std::endl;
			break;
		}

}

