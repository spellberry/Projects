//Implementing arrays

#include <iostream>
#include <string>

int main()
{
	const int MAX_ITEMS = 10;
	std::string inventory[MAX_ITEMS];

	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "shield";
	inventory[numItems++] = "armor";

	std::cout << "Your items:\n";
	for (int i = 0; i < numItems; ++i)
	{
		std::cout << inventory[i] << std::endl;
	}

	std::cout << inventory[0].size();
}