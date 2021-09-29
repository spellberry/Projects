//Score Rater 2.0

#include <iostream>

int main() {
	int score;
	std::cout << "Enter your score: ";
	std::cin >> score;

	if (score >= 1000) {
		std::cout << "You scored 1000 or more. Amazing!" << std::endl;
	}

	else {
		std::cout << "You scored less than 1000. Better luck next time!" << std::endl;
	}

	return 0;
}