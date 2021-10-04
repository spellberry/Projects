//High Scores Program
//Demonsration of algorithms

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

int main()
{
	std::cout << "Creating a list of high scores.";
	std::vector <int>::const_iterator iter;
	std::vector <int> scores;
	scores.push_back(1500);
	scores.push_back(3000);
	scores.push_back(7500);

	std::cout << "\nHigh scores:\n";

	//Displaying the 'scores' vector
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	std::cout << "\nFinding a score\n";
	std::cout << "Enter a score to find: ";
	int score;
	std::cin >> score;

	//Using the find() algorithm
	iter = find(scores.begin(), scores.end(), score);

	if (iter != scores.end())
	{
		std::cout << "Score found\n";
	}

	else
	{
		std::cout << "Score not found.\n";
	}

	//Using the random_shuffle() algorithm
	std::cout << "\nRandomizing scores";
	srand(static_cast <unsigned int> (time(0)));
	random_shuffle(scores.begin(), scores.end());
	std::cout << "\nHigh scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	//Using the sort() algorithm
	std::cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	std::cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	return 0;
}
