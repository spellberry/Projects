//The Classic game of Hangman
/*
Make a group of random words
Pick a random number from the group
While the player hasn't gone over the limit of wrong guesses and hasn't guessed the word
	Tell the player how many wrong guesses he as left
	Display what the used letters are
	Show how many letters form the word the player has guessed
	Get the player to input his next guess
		If the player guesses a letter, display it in the secret word
		If he or she has already guessed that letter, display
			Get the player to input another guess
		Add the letter to the group of used letters
		If the guess is part of th secert word
			Tell the player their guess was correct
			Add their guessed letter to the list
		If the guess was not correct
			Tell the player their guess is wrong
			Increment the amount of the player's wrong guesses
		If the wrong guesses are above the limit
			End the game
		If that's not true
			Congratulate the player
*/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <vector>
#include <ctime>
#include <cctype>

int main()
{
	//Creating a vector of random words
	std::vector <std::string> words;
	words.push_back("SWORD");
	words.push_back("BATTLE AXE");
	words.push_back("RAPIER");

	//Constant integer of max wrong guesses
	const int MAX_WRONG_GUESSES = 8;

	//Randomising the word the player has to guess so it is different every time
	srand(static_cast <unsigned int> (time(0)));
	random_shuffle(words.begin(), words.end());

	const std::string WORD = words[0];
	int wrongGuesses = 0;
	std::string wordSoFar = (WORD.size(), "-");
	std::string usedLetters = "";

	std::cout << "Welcome to Hangman. Good luck!\n";

	while ((wrongGuesses < MAX_WRONG_GUESSES) && (wordSoFar != WORD))
	{
		std::cout << "So far the word is\n" << wordSoFar << std::endl;
		std::cout << "You have used the following letters: " << usedLetters << std::endl;
		std::cout << "You have " << MAX_WRONG_GUESSES - wrongGuesses << " left" << std::endl;


		char guess;
		std::cout << "Enter your guess: ";
		std::cin >> guess;

		//Make the guessed letter uppercase
		guess = toupper(guess);


		while (usedLetters.find(guess) != std::string::npos)
		{
			std::cout << "You have already guessed this letter\n";
			std::cout << "Enter your guess: ";
			std::cin >> guess;
			guess = toupper(guess);
		}

		usedLetters += guess;

		if (WORD.find(guess) != std::string::npos)
		{
			std::cout << "Your guess is correct!";

			for (int i = 0; i < WORD.length(); ++i)
			{
				if (WORD[i] == guess)
				{
					wordSoFar[i] = guess;
				}
			}

		}
		else
		{
			std::cout << "Sorry, you guess is incorrect. " << guess << " isn't in the word" << std::endl;
			++wrongGuesses;
		}
	}

		if (wrongGuesses == MAX_WRONG_GUESSES)
		{
			std::cout << "You have been hanged! You reached the max amount of incorrect guesses.";
		}
		else
		{
			std::cout << "You guessed it!";
			
		}
		std::cout << "\nThe word was " << WORD << std::endl;

		return 0;
	
}