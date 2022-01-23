//Introdcution to default arguments

#include <iostream>
#include <string>

int askNumber(int high, int low = 1)
{
	int num;
	do
	{
		std::cout << "Please enter a number" << "(" << low << " - " << high << "): ";
		std::cin >> num;
	} while (num > high || num < low);

	return num;
}

int main()
{
	int number = askNumber(5);
	std::cout << "Thanks for entering " << number << "\n\n";

	number = askNumber(10, 5);
	std::cout << "Thanks for entering " << number << "\n\n";
	
	return 0;
}