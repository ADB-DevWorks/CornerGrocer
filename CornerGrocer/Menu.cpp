#include "Menu.h"
#include "MenuRenderer.h"
#include "FrequencyTable.h"

#include <iostream>

// Class to control logic of the menu system.
// Handles flow and validation.

void Menu::SelectOption(FrequencyTable& table, MenuRenderer& renderer) {

	int selection;
	std::string item;

	// Main program loop
	while (true) {
	
		renderer.RenderMenu(); // Display menu 
		std::cout << "Enter option: ";
		std::cin >> selection;

		// Menu options control
		switch (selection) {
		case 1:
			std::cout << "Enter an item: ";
			std::cin >> item;
			
			// Converts entire input to lower case
			for (char& c : item) {
				c = std::tolower(c);
			}

			// Validates that input was entered and then changes first letter to uppercase to match txt file.
			if (!item.empty()) {
				item[0] = std::toupper(item[0]);
			}

			// Checks if item entered is in list
			if (table.Contains(item)) {
				table.PrintItemFrequency(item);
			}
			else {
				std::cout << "Item invald or hasn't been sold.\nEnter a differnt item." << std::endl;
				continue;
			}
			WaitForKeypress(); // To hold screen before returning to menu
			continue;
		case 2:
			table.PrintTable();
			WaitForKeypress();
			continue;
		case 3:
			table.PrintHistogram();
			WaitForKeypress();
			continue;
		case 4:
			return; // Exits to main
			break;
		default:
			std::cout << "Invald Option\n";
			continue;
		}
		break;
	}


}

void Menu::WaitForKeypress() {
	std::cout << "\n\nPress any key to return to Main Menu...\n";
	std::cin.ignore();
	std::cin.get();
}

