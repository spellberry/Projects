//Menu Chooser
//Implemeting 'swtich' statement

#include <iostream>

int main() {

	std::cout << "Difficulty levels:\n" << std::endl;
	std::cout << "1 - Easy" << std::endl;
	std::cout << "2 - Normal" << std::endl;
	std::cout << "3 - Hard\n" << std::endl;

	int choice;
	std::cout << "Choice: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			std::cout << "You picked Easy\n";
			break;

		case 2:
			std::cout << "You picked Normal\n";
			break;

		case 3:
			std::cout << "You picked Hard\n";
			break;

		default:
			std::cout << "You made an illegal choice\n";
	}
}