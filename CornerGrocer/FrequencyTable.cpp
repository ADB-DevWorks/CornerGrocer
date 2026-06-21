#include "FrequencyTable.h"

// Class that holds the data from txt file

const std::map<std::string, int>& FrequencyTable::GetTable() const { return table; }

void FrequencyTable::AddItem(std::string soldItem) {
	
	table[soldItem]++; // Adds item to map and increments item count

}

void FrequencyTable::PrintItemFrequency(std::string item) {
	std::cout << item << " " << table.at(item) << std::endl; // Prints searched item and frequency
}

void FrequencyTable::PrintTable() {


	for (const auto& pair : table) {
		std::cout << pair.first << " " << pair.second << std::endl; // prints full list and frequency
	}
}

void FrequencyTable::PrintHistogram() {

	for (const auto& pair : table) {
		std::cout << pair.first << " " << std::string(pair.second, '*') << std::endl; // Prints list and uses frequency for histogram
	}
}

// Helper method to verify item is in list
bool FrequencyTable::Contains(std::string item) {

	return table.count(item);
}