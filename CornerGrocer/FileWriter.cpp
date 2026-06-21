#include "FileWriter.h"
#include "FrequencyTable.h"

#include <iostream>
#include <fstream>


void FileWriter::WriteToFile(const FrequencyTable& table) {
	std::ofstream outFS;

	outFS.open("frequency.dat"); // opens or creates file

	// Checks if file was opened
	if (!outFS.is_open()) {
		std::cout << "Could not open file frequency.dat." << std::endl;
		return;
	}

	// writes map to file
	for (const auto& pair : table.GetTable()) {
		outFS << pair.first << " " << pair.second << "\n";
	}

	outFS.close();
}