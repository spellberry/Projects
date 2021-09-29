//Tic-Tac-Toe

#include <iostream>
#include <string>

int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;

	char board[ROWS][COLUMNS] =
	{
		{'O','X','O'},
		{' ','X','X'},
		{'X','O','O'}
	};
	

	std::cout << "This is the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}

	board[1][0] = 'X';

	std::cout << "\nNow the board looks like this:\n";

	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << "\n'X' wins!";

}
