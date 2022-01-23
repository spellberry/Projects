//Friend Critter
//Demonstrates friend functions and operator overloading

#include <iostream>
#include <string>

class Critter
{
	//make followijng global funcitons friend of the Critter class
	friend void Peek(const Critter& aCritter);
	friend std::ostream& operator <<(std::ostream& os, const Critter& aCritter);

public:
	Critter(const std::string& name = " ");

private:
	std::string mName;

};

Critter::Critter(const std::string& name) :
	mName(name)
{}

void Peek(const Critter& aCritter);
std::ostream& operator << (std::ostream & is, const Critter & aCritter);

int main()
{
	Critter crit("Poochie");

	std::cout << "Calling Peek() to access crit's private data member:\n";
	Peek(crit);

	std::cout << "\nSending crit object to cout with the << operator:\n";
	std::cout << crit;

	return 0;
}

//global friend function that can access all of Critter object's members
void Peek(const Critter& aCritter)
{
	std::cout << aCritter.mName << std::endl;

}

//global friend function that can access all of Critter object's members
std::ostream& operator<<(std::ostream& os, const Critter& aCritter)
{
	os << "Critter Object - ";
	os << "mName: " << aCritter.mName;
	return os;
}