//Score Rater

#include <iostream>

int main() {
	if (true) {
		std::cout << "This is always displayed\n" << std::endl;
	}

	if (false) {
		std::cout << "This is never displayed\n" << std::endl;
	}

	int score = 1000;

	if (score) {
		std::cout << "At least you didn't score zero\n" << std::endl;
	}

	if (score >= 250) {
		std::cout << "You scored 250 or more. Decent.\n" << std::endl;
	}

	if (score >= 500) {
		std::cout << "You scored 500 or more. Nice job!\n " << std::endl;
		if (score >= 1000) {
			std::cout << "You scored 1000 or more. Impressive!" << std::endl;
		}
	}
}