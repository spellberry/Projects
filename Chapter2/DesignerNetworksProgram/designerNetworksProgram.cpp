//Designers Network Program

#include <iostream>
#include <string>

int main() {
	std::string username;
	std::string password;
	bool success;
	
	std::cout << "Game Designer's Network\n";
	do {
		std::cout << "\nUsername: ";
		std::cin >> username;

		std::cout << "Password: ";
		std::cin >> password;

		if (username == "S.Meier" && password == "civilization") 
		{
			std::cout << "\nWelcome, Sid. Good to see you.\n";
			success = true;
		}

		else if (username == "S.Miyamoto" && password == "mariobros")
		{
			std::cout << "\nWhat's up, Shigeru?";
			success = true;
		}

		else if (username == "Mikey" && password == "toman")
		{
			std::cout << "\nGOOD DAY, SIR!!!";
			success = true;
		}

		else if (username == "guest" || password == "guest")
		{
			std::cout << "\nWelcome, guest.";
			success = true;
		}

		else
		{
			std::cout << "\nInvalid username or password. Try again.\n";
			std::cout << "========================================" << std::endl;
			success = false;
		}
	
	} while (!success);
}