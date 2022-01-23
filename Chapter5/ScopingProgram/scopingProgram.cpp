//Introduction to scopes

#include <iostream>

void func()
{
	int var = -5;
	std::cout << "In func() the value of var is " << var << "\n\n";
}

int main()
{
	int var = 5;
	std::cout << "In main() the value of var is " << var << "\n\n";
	func();
	std::cout << "Back in main() the value of var is " << var << "\n\n";

	{
		std::cout << "In a new scope in main() the value of var is " << var << "\n\n";
		std::cout << "Creating new variablen\n";
		//Creating a new variable for this scope
		int var = 10;
		std::cout << "In a new scope in main() the value of var is " << var << "\n\n";
	}
	
	std::cout << "At the end of main() the value of var created in the new scope no longer exists\n";
	std::cout << "At the end of main() the value of var is " << var << "\n\n";

	return 0;
}