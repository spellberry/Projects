// Play again program
//Implementing 'while' loops

#include <iostream>



int main() {
	char again = 'y';
	while (again == 'y') {
		std::cout << "Played an exciting game\n";
		std::cout << "Do you want to play again (y/n): ";
		std::cin >> again;
	} std::cout << "Goodbye." << std::endl;
}


//Alternative variant

/*
int main() {
	char again;
	std::cout << "Played an exciting game\n";
	std::cout << "Do you want to play again (y/n): ";
	std::cin >> again;
	while (again == 'y') {
		std::cout << "Do you want to play again (y/n): ";
		std::cin >> again;
	}
	std::cout << "Goodbye." << std::endl;
}
*/