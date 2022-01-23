//Inventory Pointer
//Demonstrates returning a pointer

#include <iostream>
#include <string>
#include <vector>

std::string* pointerToElement(std::vector <std::string>* const pVec, int i);

int main()
{
	std::vector <std::string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Armor");
	inventory.push_back("Shield");

	//displays string object that the returned pointer points to
	std::cout << *(pointerToElement(&inventory, 0)) << "\n\n";

	//assigns one pointer to another - inexpensive assignment
	std::cout << "Assigning the returned pointer to another pointer\n";
	std::string* pStr = pointerToElement(&inventory, 1);
	std::cout << "Sending the object pointed to by new pointer to cout:\n";
	std::cout << *pStr << "\n\n";

	//copies a string object
	std::cout << "Assigning object pointed to by pointer to a string obejct.\n";
	std::string str = *(pointerToElement(&inventory, 2));
	std::cout << "Displaying the new object:\n";
	std::cout << str << "\n\n";

	//altering the string through a returned pointer
	std::cout << "Altering the string object through a returned pointer\n";
	*pStr = "Healing Potion";
	std::cout << "Displaying the object:\n";
	std::cout << inventory[1] << std::endl;

	return 0;
}

std::string* pointerToElement(std::vector <std::string>* const pVec, int i)
{
	//returns address of the string in position 'i' of vector that 'pVec' points to
	return &((*pVec)[i]);
}
