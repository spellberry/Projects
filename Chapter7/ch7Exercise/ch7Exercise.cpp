//Exercises from Chapter 7

#include <iostream>
#include <string>

int main()
{
	//Exercise 1
	std::cout << "\nWrite a program with a pointer to pointer to a string obeject. \n";
	std::cout << "Use the pointer to the pointer to call the size() member function of the string object\n\n";
	
	std::string myString = "string";
	std::string* strPtr = &myString;
	std::string* strPtr2 = strPtr;

	std::cout << "Size of string object: " << (*strPtr2).size() << std::endl;
	//Exercise 2 can be found in "madLibPointers.cpp"

	return 0;
}

