//Play again 2.0
//Using 'do' loops

#include <iostream>

int main() {
	
	char again;
	do 
	{
		std::cout << "Played an exciting game\n";
		std::cout << "Do you want to play again (Y/N): ";
		std::cin >> again;
	} while (again == 'y' || again == 'Y'); //Testing 'OR' operator

	std::cout << "\nGoodbye.";

	return 0;
}