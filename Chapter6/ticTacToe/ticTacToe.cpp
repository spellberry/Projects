//The classic Tic-Tac-Toe game

#include <iostream>
#include <string>
#include <vector>
#include <cstdbool>

//Global constant variables
const int boardSpaces = 9;
const char X = 'X';
const char O = 'O';
const char emptySpace = ' ';

//Function prototypes
void displayBoard(const std::vector <char>& board);
void instructions();
int playerMove(std::vector <char>& board, char piece);
char askQuestion(std::string question);
char turnDecide();
char opponentPiece(char piece);


int main()
{
	int move;
	std::vector <char> board(boardSpaces, emptySpace);
	instructions();
	char human = turnDecide();
	char opponent = opponentPiece(human);
	displayBoard(board);

	move = playerMove(board, human);
	board[move] = human;
	displayBoard(board);
}

//displayBoard function definition
void displayBoard(const std::vector <char>& board)
{
	std::cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
	std::cout << "\n\t" << "---------";
	std::cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
	std::cout << "\n\t" << "---------";
	std::cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
	std::cout << "\n\n"; 
}

//instructions function definition
void instructions()
{
	std::cout << "Welcome to the ultimate battle between human and computer: Tic-Tac-Toe,\n";
	std::cout << "where we once again prove the superiority of the computer intellignce\n\n";

	std::cout << "The spaces on the board correspond to the numbers from 0-8 as displayed below:\n\n";

	std::cout << "0 | 1 | 2\n";
	std::cout << "----------\n";
	std::cout << "3 | 4 | 5\n";
	std::cout << "----------\n";
	std::cout << "6 | 7 | 8\n";

	std::cout << "Prepare yourself, human. The showdown is about to start...\n\n";
}


//askQuestion fucntion definition
char askQuestion(std::string question)
{
	char answer;
	do
	{
		std::cout << question;
		std::cin >> answer;
	} while (answer != 'y' && answer != 'n');

	return answer;
	
}

//turnDecide function definition
char turnDecide()
{
	char goes_first = askQuestion("Do you wish to go first, human: ");
	if (goes_first == 'y')
	{
		std::cout << "Taking the initiative, huh? Good choice...\n\n";
		return X;
	}
	else

	{
		std::cout << "You have guts human, I'll give you that.\n\n";
	}

	return O;
}

char opponentPiece(char piece)
{
	if (piece == X)
	{
		return O;
	}
	else
	{
		return X;
	}
}

int playerMove( const std::vector <char>& board, char piece)
{
	int boardSpot;
	std::cout << "Where would you like to place your piece? ";
	std::cin >> boardSpot;
	
}

int legalMove(std::string question; int max, int min)
{
	int move;
	std::cout << question;
	std::cin >> move;
	if (move > (high))
}





