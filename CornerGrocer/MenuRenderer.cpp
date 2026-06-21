#include "MenuRenderer.h"
#include <iostream>

// Class designed for displaying the menu ui

void MenuRenderer::RenderMenu() {

	std::cout << std::string(60, '-') << std::endl;
	std::cout << std::string(20, '-') << "     MAIN MENU      " << std::string(20, '-') << std::endl;
	std::cout << std::endl;
	std::cout << "Please select one of the following options to review sales report.\n\n";
	std::cout << "OPTION 1: Search by item to see individual item sales.\n";
	std::cout << "OPTION 2: View list of all items and number sold.\n";
	std::cout << "OPTION 3: View all items and sales in form of a histogram.\n";
	std::cout << "OPTION 4: Exit the program.\n\n";
	std::cout << std::string(60, '-') << std::endl;
	std::cout << std::endl;

}