//Hero Inventory 3.0
//Implementation of iterators

#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector <std::string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Armor");
	inventory.push_back("Shield");

	std::vector <std::string>::iterator myIterator;
	std::vector < std::string>::const_iterator iter;

	//Displaying the 'inventory' vector using iterators
	std::cout << "Your inventory:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	//Changing the 'Sword' object to 'Battle Axe'
	myIterator = inventory.begin();
	*myIterator = "Battle Axe";

	//Displaying the new contents of the inventory
	std::cout << "\nYou buy an Axe and sell your Sword to a travelling vendor\n";
	std::cout << "\nYour inventory:\n";
	for (int display = 0; display < inventory.size(); ++display)
	{
		std::cout << inventory[display] << std::endl;
	}

	//Different ways of displaying the size of an iterator
	std::cout << "\nThe item name '" << *myIterator << "' has " << (*myIterator).size() << " letters.\n";
	std::cout << "\nThe item name '" << *myIterator << "' has " << myIterator->size() << " letters.\n";

	//Adding 'Crossbow' to the inventory
	inventory.insert(inventory.begin(), "Crossbow");

	//Displaying the new contents of the inventory
	std::cout << "\nYou acquire a crossbow from the enemy you have slain\n";
	std::cout << "\nYour items now:\n";

	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	//Deleting the 'Shield' object from the 'inventory' vector
	inventory.erase(inventory.begin() + 3);
	std::cout << "\nYour shield was shattered to pieces.\n";
	std::cout << "\nYour items now:\n";

	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	return 0;
}