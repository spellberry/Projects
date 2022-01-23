//Introduction to references

#include <iostream>

int main()
{
	int myScore = 1000;
	int& mikesScore = myScore;

	std::cout << "My score is: " << myScore << "\n";
	std::cout << "Mike's score is: " << mikesScore << "\n\n";

	std::cout << "Adding 500 to my score\n";
	myScore += 500;

	std::cout << "My score is now: " << myScore << "\n";
	std::cout << "Mike's score is now: " << mikesScore << "\n\n";

	std::cout << "Adding 500 to Mike's score\n";
	mikesScore += 500;

	std::cout << "My score is now: " << myScore << "\n";
	std::cout << "Mike's score is now: " << mikesScore << "\n\n";

	return 0;
}