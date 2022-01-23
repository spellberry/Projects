//Inventory Referencer
//Returning a reference

#include <iostream>
#include <string>
#include <vector>

std::string& elementReference(std::vector <std::string>& inventory, int i);

int main()
{
	std::vector <std::string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Shield");
	inventory.push_back("Armor");

	std::cout << "Sending the returned refernce to cout:\n";
	std::cout << elementReference(inventory, 0) << "\n\n";

	std::cout << "Assigning the returned reference to another reference.\n";
	std::string& rStr = elementReference(inventory, 1);
	std::cout << "Sending the reference to cout:\n";
	std::cout << rStr << "\n\n";

	std::cout << "Assigning the returned reference to another object.\n";
	std::string str = elementReference(inventory, 2);
	std::cout << "Sending the new string object to cout:\n";
	std::cout << str << "\n\n";

	std::cout << "Altering an object thorugh a returned reference.\n";
	rStr = "Healing Potion";
	std::cout << "Sending the altered object to cout:\n";
	std::cout << inventory[1] << "\n\n";

}

std::string& elementReference(std::vector <std::string>& vec, int i)
{
	return vec [i];
}