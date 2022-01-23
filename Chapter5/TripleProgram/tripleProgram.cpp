//Example of function overloading

#include <iostream>
#include <string>

int triple(int number);
std::string triple(std::string text);

int main()
{
	std::cout << "Tripling 7: " << triple(7) << "\n\n";
	std::cout << "Tripling 'coding:'" << triple("coding");
}

int triple(int number)
{
	return (number * 3);
}

std::string triple(std::string text)
{
	return (text + ' ' + text + ' ' + text);
}