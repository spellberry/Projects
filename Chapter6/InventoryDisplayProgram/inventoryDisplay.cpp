//Inventory Displayer
//Use of constant references

#include <iostream>
#include <vector>
#include <string>

void display(const std::vector <std::string> &inventory);

int main()
{
	std::vector <std::string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Shield");
	inventory.push_back("Armor");

	display(inventory);

	return 0;
}

void display(const std::vector <std::string> &vec)
{
	//Displaying the vector using a basic for loop
	std::cout << "Your items:\n";
	for (int item = 0; item < vec.size(); ++item) {
		std::cout << vec [item] << std::endl;
	}
}
/* Another way to display the vector but this time using iterators

for (std::vector <std::string>::const iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
*/



