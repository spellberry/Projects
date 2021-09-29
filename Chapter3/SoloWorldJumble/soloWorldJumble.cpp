//Coding Word Jumble alone
//This project is very similar to Word Jumble. It is with modified code and it is written from scratch in a slightly different way.


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
	//Here the list of the words is not made with an enumerator list, but with 2 integers
	//The words and hints are different too

	const int numWords = 3;
	const int hints = 3;
	int wordPick = 0;
	int hintPick = 1;
	const std::string words [numWords][hints] =
	{
		{"pen", "Writing it down might help. "},
		{"flower", "It is always a good gift, especially for a girl. "},
		{"book", "Maybe you should start reading more. "}
	};

	//Randomize the pick of a hint or word
	//The randomization process is also identical

	srand(static_cast <unsigned int> (time(0)));
	int choice = (rand() % numWords);
	std::string theWord = words[choice][wordPick];
	std::string theHint = words[choice][hintPick];

	std::string jumbledWord = theWord;
	int length = jumbledWord.size();
	for (int jumble = 0; jumble < length; ++jumble)
	{
		int letter1 = (rand() % length);
		int letter2 = (rand() % length);
		char temp = jumbledWord[letter1];
		jumbledWord[letter1] = jumbledWord[letter2];
		jumbledWord[letter2] = temp;
	}

	std::cout << "\t\tWelcome to Word Jumble!\n\n";
	std::cout << "Unscramble the letters to make a word. \n";
	std::cout << "Enter 'hint' for a hint.\n";
	std::cout << "Enter 'quit' to quit the game";
	std::cout << "\nThe jumble is: " << jumbledWord;

	std::string guess;
	std::cout << "\n\nYour guess: ";
	std::cin >> guess;

	while (guess != theWord && guess != "quit")
	{
		if (guess == "hint")
		{
			std::cout << theHint;
		}

		else
		{
			std::cout << "Sorry, that's not it.";
		}
		std::cout << "\n\nYour guess: ";
		std::cin >> guess;
	}

	if (guess == theWord)
	{
		std::cout << "That's it, you got it!";
	}

	std::cout << "\nThanks for playing!";

	return 0;
}
