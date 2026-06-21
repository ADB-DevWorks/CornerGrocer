#include "FileReader.h"
#include "FrequencyTable.h"

#include <iostream>
#include <fstream>

void FileReader::ReadFile(FrequencyTable& table) {
	std::ifstream inFS;
	std::string fileString;

	// Opens file
	inFS.open("GroceryInput.txt");

	// Checks if file was opened
	if (!inFS.is_open()) {
		std::cout << "Could not open file" << std::endl;
		return;
	}

	// Reads file and adds contents to map
	inFS >> fileString;
	while (!inFS.fail()) {
		table.AddItem(fileString);
		inFS >> fileString;
	}

	inFS.close();

}