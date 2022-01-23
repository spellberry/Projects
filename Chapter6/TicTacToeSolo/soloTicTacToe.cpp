//Solo effort at creating Tic Tac Toe
/*
Create a board 3x3
Display the rules and the board
Determine who goes first
	The player who goes first takes 'X'
	The player who goes second takes 'O'

*/

#include <iostream>
#include <vector>
#include <string>
#include <cstdbool>
//Global constants
int boardSpaces = 9;
char emptySpace = ' ';
const char X = 'X';
const char O = 'O';
char playerOne;
char playerTwo;
const char emptySpace = ' ';
char tie = 'T';

//Function prototypes
void instructions();
void displayBoard(const std::vector <char>& board);
char turnDecide();
int playerMove();


int main()
{
	std::vector <char> board (boardSpaces, emptySpace);
	instructions();
	displayBoard(board);
	turnDecide();
	std::cout << playerOne;
	std::cout << "\n" << playerTwo;

}

void instructions()
{
	std::cout << "Welcome to the classic game of Tic-Tac-Toe\n";
	std::cout << "This is how the board looks like:\n\n";
	std::cout << "\t" << "0" << " | " << "1" << " | " << "2" << std::endl;
	std::cout << "\t" << "---------" << std::endl;
	std::cout << "\t" << "3" << " | " << "4" << " | " << "5" << std::endl;
	std::cout << "\t" << "---------" << std::endl;
	std::cout << "\t" << "6" << " | " << "7" << " | " << "8" << "\n\n";
	std::cout << "Choose the spot where you'd like to put your piece by picking a number from 0-8\n\n";
}

void displayBoard(const std::vector <char>& board)
{
	std::cout << "\t" << board[0] << " | " << board[1] << " | " << board[2] << std::endl;
	std::cout << "\t" << "---------" << std::endl;
	std::cout << "\t" << board[3] << " | " << board[4] << " | " << board[5] << std::endl;
	std::cout << "\t" << "---------" << std::endl;
	std::cout << "\t" << board[6] << " | " << board[7] << " | " << board[8] << std::endl;
}

char turnDecide()
{

	do {
		std::cout << "\nPlayer one, please enter the piece you wish to play with ('X' or 'O'): ";
		std::cin >> playerOne;
	
	
		if (playerOne == X || playerOne == 'x')
		{
			std::cout << "Player two, you will be using the piece " << O << ".";
			std::cout << " You will be going second." << "\n\n";
			playerTwo = O;
		}
		else if (playerOne == O || playerOne == 'o')
		{
			std::cout << "Player two, you will be using the piece " << X << ".";
			std::cout << " You will be going first." << "\n\n";
			playerTwo = X;
		}

		playerOne = playerOne;
	} while (playerOne != X && playerOne != 'x' && playerOne != O && playerOne != 'o');


	return playerOne;
}

char winningCombinations(const std::vector <char>& board)
{
	const int winningRows[8][3] = {{0, 1 ,2}, {3, 4, 5}, {6, 7, 8},
								   {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
								   {0, 4, 8}, {2, 4 ,6}};
	
	const int rows = 8;

	for (int row = 0; row < rows; ++row)
	{
		if ((board[winningRows[row][0]] != emptySpace) && (board[winningRows[row][0]] == board[winningRows[row][1]]) &&
			(board[winningRows[row][1]] == board[winningRows[row][2]]))
		{
			return board[winningRows[row][0]];
		}
	}

	if (std::count(board.begin(), board.end(), emptySpace == 0))
	{
		return tie;
	}
}                                  

