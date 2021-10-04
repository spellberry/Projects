//Word Jumble

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const std::string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"glasses", "These might help you see the answer."},
		{"labored", "Going slowly, is it?"},
		{"persistent", "Keep at it."},
		{"jumble", "It's the whole idea behind the game."}
	};

	srand(static_cast<unsigned int> (time(0)));
	int choice = (rand() % NUM_WORDS);
	std::string theWord = WORDS[choice][WORD];
	std::string theHint = WORDS[choice][WORD];

	std::string jumbledWord = theWord;
	int length = jumbledWord.size();
	for (int jum = 0; jum < length; ++jum)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumbledWord[index1];
		jumbledWord[index1] = jumbledWord[index2];
		jumbledWord[index2] = temp;
	}

	std::cout << "\t\tWelcome to Word Jumble!n\n";
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