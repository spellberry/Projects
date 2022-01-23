//Array passer
//Demonstrates the relationship between pointers and arrays

#include <iostream>

void increase(int* const array, const int numScores);
void display(const int* const array, const int numScores);

int main()
{
	std::cout << "Creatinh an array of high scores\n\n";
	const int numScores = 3;
	int highScores[numScores] = { 5000, 3500, 2700 };

	std::cout << "Displaying scores using array name as a constant pointer\n";
	std::cout << *highScores << std::endl;
	std::cout << *(highScores + 1) << std::endl;
	std::cout << *(highScores + 2) << "\n\n";

	std::cout << "Increasing scores by passing array as a constant pointer\n\n";
	increase(highScores, numScores);
	std::cout << "Displaying scores by passing array as a constant pointer to a constant\n";
	display(highScores, numScores);

	return 0;

}

void increase(int* const array, const int numScores)
{
	for (int i = 0; i < numScores; ++i)
	{
		array[i] += 500;
	}
}
void display(const int* const array, const int numScores)
{
	for (int i = 0; i < numScores; ++i)
	{
		std::cout << array[i] << std::endl;
	}
}