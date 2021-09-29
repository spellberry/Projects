//Chapter 1 exercise

#include <iostream>

int main() {

	int score, score2, score3;
	std::cout << "Enter three numbers with spaces in between them: ";
	std::cin >> score;
	std::cin >> score2;
	std::cin >> score3;
	int scoreAverage = (score + score2 + score3) / 3;
	std::cout << "Score average: " << scoreAverage << std::endl;

	return 0;
}