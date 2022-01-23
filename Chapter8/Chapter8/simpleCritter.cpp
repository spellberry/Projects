//Simple Critter
//Demonstrates creating a new type

#include <iostream>

class Critter
{
public:
	int mHunger;
	void Greet();
};

void Critter::Greet()
{
	std::cout << "Hi. I'm a critter. My hunger leve is " << mHunger << ".\n";
}

int main()
{
	Critter crit1;
	Critter crit2;

	crit1.mHunger = 9;
	std::cout << "crit1's hunger level is " << crit1.mHunger << ".\n";
	
	crit2.mHunger = 3;
	std::cout << "crit2's hunger level is " << crit1.mHunger << ".\n\n";

	crit1.Greet();
	crit2.Greet();
	
	return 0;
}