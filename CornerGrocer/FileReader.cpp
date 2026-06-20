#include "FileReader.h"
#include "FrequencyTable.h"

#include <iostream>
#include <fstream>

void FileReader::ReadFile(FrequencyTable& table) {
	std::ifstream inFS;
	std::string fileString;

	inFS.open("GroceryInput.txt");

	if (!inFS.is_open()) {
		std::cout << "Could not open file" << std::endl;
		return;
	}

	inFS >> fileString;
	while (!inFS.fail()) {
		table.AddItem(fileString);
		inFS >> fileString;
	}

	inFS.close();

}