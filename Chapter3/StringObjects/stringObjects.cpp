//Practicing strings

#include <iostream>
#include <string>

int main()
{
	std::string word1 = "Game";
	std::string word2("Over");
	std::string word3(3, '!');

	std::string phrase = word1 + " " + word2 + " " + word3;

	std::cout << "The phrase has " << phrase.size() << " characters in it. \n\n";

	std::cout << "The character at position 0 is: " << phrase[0] << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
		std::cout << "Character at postion " << i << " is: " << phrase[i] << std::endl;
	}

	if (phrase.find("eggplant") == std::string::npos)
	{
		std::cout << "\n'eggplant' is not in the phrase";
	}
	phrase.erase();

	if (phrase.empty())
	{
		std::cout << "\n\nThe phrase is no more";
	}
}