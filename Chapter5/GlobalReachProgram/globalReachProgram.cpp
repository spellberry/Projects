//Intorduction to global variables

#include <iostream>

int glob = 10;

void accessGlobal()
{
	std::cout << "In accesGlobal() glob is " << glob << "\n\n";
}

void hideGlobal()
{
	int glob = 0;
	std::cout << "In hideGlobal() glob is " << glob << "\n\n";
}

void changeGlobal()
{
	int glob = -10;
	std::cout << "In changeGlobal() glob is " << glob << "\n\n";
}

int main()
{
	std::cout << "In main() glob is " << glob << "\n\n";
	accessGlobal();
	
	hideGlobal();
	std::cout << "In main() glob is " << glob << "\n\n";

	changeGlobal();
	std::cout << "In main() glob is " << glob << "\n\n";
	
	return 0;
}