//Hero Inventory 2.0
//Implementation of vectors

#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector <std::string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Armor");
	inventory.push_back("Shield");

	std::cout << "You have " << inventory.size() << " items.\n";

	std::cout << "\nYour items:\n";
	
	for (int item = 0; item < inventory.size(); ++item)
	{
		std::cout << inventory[item] << std::endl;
	}

	inventory[0] = "Battle Axe";

	std::cout << "\n\nYou trade your sword for a battle axe";
	std::cout << "\nYour items now: \n\n";
	for (int item = 0; item < inventory.size(); ++item)
	{
		std::cout << inventory[item] << std::endl;
	}
	std::cout << "\nThe item " << inventory[0] << " has ";
	std::cout << inventory[1].size() << " letters in it\n";

	inventory.pop_back();
	std::cout << "Your shield has been destroyed after your last battle.\n";
	std::cout << "Your itmes now: \n\n";
	for (int item = 0; item < inventory.size(); ++item)
	{
		std::cout << inventory[item] << std::endl;
	}

	std::cout << "\nThieves attack you and you black out!\n";
	inventory.clear();

	if (inventory.empty())
	{
		std::cout << "\nYou have no items, everything was stolen.";
	}

	else
	{
		std::cout << "At least you have something left";
	}

	return 0;

}