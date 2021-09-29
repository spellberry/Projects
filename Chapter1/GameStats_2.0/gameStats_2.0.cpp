// Game Stats 2.0

#include <iostream>

int main() {
	typedef unsigned int uint;
	uint score = 5000;

	std::cout << "Score: " << score << std::endl;

	score = score + 100;
	std::cout << "Score: " << score << std::endl;

	int lives = 3;
	++lives;
	std::cout << "Lives: " << lives << std::endl;

	lives = 3;
	int bonus = ++lives * 10;
	std::cout << "Lives, Bonus: " << lives << " , " << bonus << std::endl;

	lives = 3;
	bonus = lives++ * 10;
	std::cout << "Lives, Bonus: " << lives << " , " << bonus << std::endl;

	return 0;
}
