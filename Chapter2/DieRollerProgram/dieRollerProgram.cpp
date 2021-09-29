//Die Roller Program

#include <iostream>
#include <cstdlib>
#include <ctime>


int main() 
{
	std::srand(static_cast <unsigned int>(std::time(0)));
	int randomNumber = rand();
	int die = (randomNumber % 6) + 1;
	std::cout << "You rolled: " << die << std::endl;
}