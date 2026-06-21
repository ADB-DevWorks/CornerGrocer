#include "Menu.h"
#include "MenuRenderer.h"
#include "FrequencyTable.h"

#include <iostream>

void Menu::SelectOption(FrequencyTable& table, MenuRenderer& renderer) {

	int selection;
	std::string item;

	while (true) {
	
		renderer.RenderMenu();
		std::cout << "Enter option: ";
		std::cin >> selection;

		switch (selection) {
		case 1:
			std::cout << "Enter an item: ";
			std::cin >> item;
			
			for (char& c : item) {
				c = std::tolower(c);
			}

			if (!item.empty()) {
				item[0] = std::toupper(item[0]);
			}

			if (table.Contains(item)) {
				table.PrintItemFrequency(item);
			}
			else {
				std::cout << "Item invald or hasn't been sold.\nEnter a differnt item." << std::endl;
				continue;
			}
			WaitForKeypress();
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
			return;
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

