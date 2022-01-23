//Static Critter
//Demonstrates static member variables and functions

#include <iostream>

class Critter
{
public:
	static int sTotal;

	Critter(int hunger = 0);
	static int getTotal();

private:
	int mHunger;
};

int Critter::sTotal = 0;

Critter::Critter(int hunger) :
	mHunger(hunger)
{
	std::cout << "A new critter was born!" << std::endl;
	++sTotal;
}

int Critter::getTotal()
{
	return sTotal;
}

int main()
{
	std::cout << "The total amount of critters is: ";
	std::cout << Critter::sTotal << "\n\n";

	Critter crit1, crit2, crit3;

	std::cout << "\nThe total amount of critters is: ";
	std::cout << Critter::getTotal() << "\n\n";

	return 0;
}