//Game Stats Program

#include <iostream>

int main() {
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;

	std::cout << "Your Game Stats: " << std::endl;
	std::cout << "\nScore: " << score << std::endl;
	std::cout << "Distance: " << distance << std::endl;
	std::cout << "Play Again: " << playAgain << std::endl;
	std::cout << "Lives: " << lives << std::endl;
	std::cout << "Aliens Killed: " << aliensKilled << std::endl;
	std::cout << "Engine Temperature: " << engineTemp << std::endl;

	int fuel;
	std::cout << "How much fuel? ";
	std::cin >> fuel;
	std::cout << "Fuel: " << fuel << std::endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	std::cout << "Bonus: " << bonus << std::endl;

}