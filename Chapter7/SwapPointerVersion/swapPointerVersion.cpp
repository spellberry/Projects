//Swap Pointer
//Demonstrates passing constants to pointers to alter argumnet variables

#include <iostream>

void badSwap(int x, int y);
void goodSwap(int* const x, int* const y);


int main()
{
	int myScore = 100;
	int yourScore = 1000;
	std::cout << "Original values\n";
	std::cout << "myScore: " << myScore << std::endl;
	std::cout << "yourScore: " << yourScore << "\n\n";

	std::cout << "Calling badSwap\n";
	badSwap(myScore, yourScore);
	std::cout << "myScore: " << myScore << std::endl;
	std::cout << "yourScore: " << yourScore << "\n\n";

	std::cout << "Calling goodSwap\n";
	goodSwap(&myScore, &yourScore);
	std::cout << "myScore: " << myScore << std::endl;
	std::cout << "yourScore: " << yourScore << "\n\n";

	return 0;
}

void badSwap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void goodSwap(int* const pX, int* const pY)
{
	int temp = *pX;
	*pX = *pY;
	*pY = temp;
}