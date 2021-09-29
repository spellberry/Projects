//Score Rater 3.0

#include <iostream>


int main() {
	
	int score;
	std::cout << "Enter your score: ";
	std::cin >> score;

	if (score >= 1000) {
		std::cout << "You scored 1000 or more. Amazing!\n" << std::endl;
	}

	else if (score >= 500) {
		std::cout << "You scored 500 or more. Good job!\n" << std::endl;
	}

	else if (score >= 250) {
		std::cout << "You scored 250 or more. Not bad.\n" << std::endl;
	}

	else {
		std::cout << "You scored less than 250. Better luck next time.\n" << std::endl;
	}

	return 0;
}