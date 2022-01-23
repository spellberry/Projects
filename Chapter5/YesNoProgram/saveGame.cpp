//Functions with parameters and return values

#include <iostream>
#include <string>

//This I wrote from the book
char quitGame(std::string question)
{
	char response3;
	do
	{
		std::cout << question << " (y/n): ";
		std::cin >> response3;
	} while(response3 != 'y' && response3 != 'n');
	
	return response3;
}

//This I did myself
char saveGame()
{
	char response1;
	bool saveGame = true;
	do
	{
		std::cout << "Would you like to save the game? (y/n): ";
		std::cin >> response1;
		if (response1 == 'y')
		{
			saveGame = true;
		}
		else if (response1 == 'n')
		{
			std::cout << "Are you sure? All unsaved changes will be lost. (y/n): ";
			char response2;
			std::cin >> response2;
			if (response2 == 'n')
			{
				saveGame = false;
			}

		}

	} while (saveGame == false);

	return response1;
}


int main()
{
	char answer1 = quitGame("Do you want to quit the game?");

	char answer2 = saveGame();
	


	return 0;
}