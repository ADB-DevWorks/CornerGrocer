#include "FrequencyTable.h"

std::map<std::string, int> FrequencyTable::GetTable() { return table; }

void FrequencyTable::AddItem(std::string soldItem) {
	
	table[soldItem]++;

}

void FrequencyTable::PrintTable() {


	for (const auto& pair : table) {
		std::cout << pair.first << std::endl;
	}
}