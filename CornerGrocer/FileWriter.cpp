#include "FileWriter.h"
#include "FrequencyTable.h"

#include <iostream>
#include <fstream>


void FileWriter::WriteToFile(const FrequencyTable& table) {
	std::ofstream outFS;

	outFS.open("frequency.dat");

	if (!outFS.is_open()) {
		std::cout << "Could not open file frequency.dat." << std::endl;
		return;
	}

	for (const auto& pair : table.GetTable()) {
		outFS << pair.first << " " << pair.second << "\n";
	}

	outFS.close();
}