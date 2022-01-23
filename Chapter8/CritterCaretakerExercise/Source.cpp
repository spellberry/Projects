//Critter Caretaker
//Exercise:
/*
1.Improve the program so that you can enter an unlisted menu choice that reveals the exact values of the critter's hunger and boredom levels

2. Change the program so the program so that the critter is more expresive about its needs by hinting how hungry adn bored it is.

*/

#include <iostream>

class Critter
{
public:
	Critter(int hunger = 0, int boredom = 0);
	void Talk();
	void Eat(int food = 4);
	void Play(int fun = 4);
	void DisplayValues() const;

private:
	int mHunger;
	int mBoredom;

	int GetMood() const;
	void PassTime(int time = 1);
};

Critter::Critter(int hunger, int boredom) :
	mHunger(hunger),
	mBoredom(boredom)
{}

inline int Critter::GetMood() const
{
	return (mHunger + mBoredom);
}

void Critter::PassTime(int time)
{
	mHunger += time;
	mBoredom += time;
}

void Critter::Talk()
{
	std::cout << "I feel ";
	int mood = GetMood();

	if (mood > 15)
	{
		std::cout << "super bored\n";
	}

	else if (mood > 10)
	{
		std::cout << "really bored\n";
	}

	else if (mood > 5)
	{
		std::cout << "a little bored\n";
	}

	else
	{
		std::cout << "happy!\n\n";
	}

	std::cout << "I am ";
	if (mHunger > 15)
	{
		std::cout << "starving!\n";
	}

	else if (mHunger > 10)
	{
		std::cout << "very hungry.\n";
	}

	else if (mHunger > 5)
	{
		std::cout << "a bit hungry\n";
	}

	else
	{
		std::cout << "not hungry :)\n\n";
	}
	
	PassTime();
}

void Critter::Eat(int food)
{
	std::cout << "Buuurp.\n";

	mHunger -= food;
	if (mHunger < 0)
	{
		mHunger = 0;
	}

	PassTime();
}

void Critter::Play(int fun)
{
	std::cout << "Wheeee!\n";

	mBoredom -= fun;
	if (mBoredom < 0)
	{
		mBoredom = 0;
	}

	PassTime();
}

void Critter::DisplayValues() const
{
	std::cout << "Hunger level: " << mHunger << std::endl;
	std::cout << "Boredom level: " << mBoredom << std::endl;
}


int main()
{
	Critter crit;
	crit.Talk();

	int choice;

	do
	{
		std::cout << "\nCritter Caretaker\n\n";
		std::cout << "0 - Quit\n";
		std::cout << "1 - Listen to your critter\n";
		std::cout << "2 - Feed your critter\n";
		std::cout << "3 - Play with your critter\n";
		std::cout << "4 - Display hunger and boredom levels\n\n";

		std::cout << "Choice: ";
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Goodbye.\n";
			break;

		case 1:
			crit.Talk();
			break;

		case 2:
			crit.Eat();
			break;

		case 3:
			crit.Play();
			break;

		case 4:
			crit.DisplayValues();
			break;

		default:
			std::cout << "Sorry, but " << choice << " isn't a valid choice.\n";
		}

	} while (choice != 0);

	return 0;
}