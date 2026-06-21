#include "FrequencyTable.h"

std::map<std::string, int> FrequencyTable::GetTable() { return table; }

void FrequencyTable::AddItem(std::string soldItem) {
	
	table[soldItem]++;

}

void FrequencyTable::PrintItemFrequency(std::string item) {
	std::cout << item << " " << table.at(item) << std::endl;
}

void FrequencyTable::PrintTable() {


	for (const auto& pair : table) {
		std::cout << pair.first << " " << pair.second << std::endl;
	}
}

void FrequencyTable::PrintHistogram() {

	for (const auto& pair : table) {
		std::cout << pair.first << " " << std::string(pair.second, '*') << std::endl;
	}
}

bool FrequencyTable::Contains(std::string item) {

	return table.count(item);
}