//Private Critter
//Demonstrates setting member access levels

#include <iostream>

class Critter
{
public:
	Critter(int hunger = 0);
	int getHunger()const;
	void setHunger(int hunger);
private:
	int mHunger;
};

Critter::Critter(int hunger):
	mHunger(hunger)
{
	std::cout << "A new critter was born!\n\n";
}

int Critter::getHunger() const
{
	return mHunger;
}

void Critter::setHunger(int hunger)
{
	if (hunger < 0)
	{
		std::cout << "You can't set a critter's hunger to a negative value.\n\n";
	}
	else
	{
		mHunger = hunger;
	}
}

int main()
{
	Critter crit(5);
	std::cout << "Calling GetHunger(): " << crit.getHunger() << "\n\n";

	std::cout << "Calling setHugner() with -1\n";
	crit.setHunger(-1);

	std::cout << "Calling setHunger() with 9.\n";
	crit.setHunger(9);
	std::cout << "Calling GetHunger(): " << crit.getHunger() << "\n\n";

	return 0;
}