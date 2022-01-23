//Passing references to change argument variables

#include <iostream>

void badSwap(int x, int y);

void goodSwap(int& x, int& y);

int main()
{
	int myScore = 150;
	int yourScore = 1000;

	std::cout << "Original values:\n";
	std::cout << "myScore: " << myScore << "\n";
	std::cout << "yourScore: " << yourScore << "\n\n";

	std::cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	std::cout << "myScore: " << myScore << "\n";
	std::cout << "yourScore: " << yourScore << "\n\n";

	std::cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	std::cout << "myScore: " << myScore << "\n";
	std::cout << "yourScore: " << yourScore << "\n\n";
}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}