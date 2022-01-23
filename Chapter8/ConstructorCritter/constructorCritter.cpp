//Constructor Critter
//Demonstreates constructors

#include <iostream>

class Critter
{
public:
	int mHunger;
	Critter(int hunger = 0);
	void Greet();
};

Critter::Critter(int hunger)
{
	std::cout << "A new critter has been born!" << std::endl;
	mHunger = hunger;
}

void Critter::Greet()
{
	std::cout << "Hi. I'm a critter and my hunger level is " << mHunger << ".\n\n";
}

int main()
{
	Critter crit(7);
	crit.Greet();

	return 0;
}