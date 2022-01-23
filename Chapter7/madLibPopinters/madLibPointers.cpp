//Mad-Lib with Pointers
//Creates a story based off player input
//This is a new version of Mad-Lib where pointers are implemented (from Chapter 7, exercise 2)

#include <iostream>
#include <string>

int askNumber(std::string input);
std::string askText(std::string input);
void tellStory(std::string* name, std::string* noun, int number, std::string* bodyPart, std::string* verb);

int main()
{
	std::cout << "Welcome to MadLib\n\n";
	std::cout << "Please answer the following questions to create a story: \n";

	std::string name = askText("Please enter a name: ");
	std::string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
	std::string bodyPart = askText("Please enter a body part: ");
	std::string verb = askText("Please enter a verb: ");

	tellStory(&name, &noun, number, &bodyPart, &verb);

	return 0;
}

int askNumber(std::string input)
{
	int number;
	std::cout << input;
	std::cin >> number;
	return number;
}

std::string askText(std::string input)
{
	std::string text;
	std::cout << input;
	std::cin >> text;
	return text;
}

void tellStory(std::string* name, std::string* noun, int number, std::string* bodyPart, std::string* verb)
{
	std::cout << "Here's your story: \n\n";
	std::cout << "The famous explorer ";
	std::cout << *name;
	std::cout << " had nearly given up a life-long quest to find ";
	std::cout << "The Lost City of ";
	std::cout << *noun;
	std::cout << " when one day, the ";
	std::cout << *noun;
	std::cout << " found the explorer. ";
	std::cout << "Surronded by ";
	std::cout << number;
	std::cout << " " << *noun;
	std::cout << ", a tear came to ";
	std::cout << *name << "'s " << *bodyPart << ". ";
	std::cout << "After all this time the quest came to an end. ";
	std::cout << "And then the ";
	std::cout << *noun;
	std::cout << " promptly devoured ";
	std::cout << *name << ". ";
	std::cout << "The moral of the story? Be careful what you " << *verb << " for.\n\n";
}