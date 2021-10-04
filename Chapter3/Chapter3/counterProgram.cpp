//Counting program
//Basic for Loops implementation
#include <iostream>

int main()
{
	std::cout << "Counting forward:\n";
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << " ";
	}

	std::cout << "\n\nCounting backwards:\n";
	for (int i = 9; i >= 0; --i)
	{
		std::cout << i << " ";
	}

	std::cout << "\n\nCounting by fives:\n";
	for (int i = 0; i <= 50; i += 5)
	{
		std::cout << i << " ";
	}

	std::cout << "\n\nCounting with null statements: \n";
	int count = 0;
	for (; count < 10;)
	{
		std::cout << count << " ";
		++count;
	}

	std::cout << "\n\nCounting with nested for loops: \n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			std::cout << i << "," << j << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}