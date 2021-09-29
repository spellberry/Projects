//Lost Fortune

#include <iostream>
#include <string>

int main() {

	const int GOLD_PIECES = 900;
	int adventurers, killed, survivors;
	std::string leader;
	std::cout << "Welcome to Lost Fortune\n";
	std::cout << "Please enter the following for your personalised adventure\n";
	std::cout << "Enter a number: ";
	std::cin >> adventurers;
	std::cout << "Enter a number smaller than the first: ";
	std::cin >> killed;
	std::cout << "Enter yout last name: ";
	std::cin >> leader;
	survivors = adventurers - killed;


	std::cout << "\nA brave group of " << adventurers << " set out on a quest - in search of the lost treasure of the Ancient Dwarves. The group was led by the legendary rogue " << leader << "." << std::endl;
	std::cout << "\nAlong the way, a band of marauding ogres ambushed the party. All fought bravely unde rthe command of " << leader << " and the ogres were defeated, but at a cost. "
		      << "Of the adventurers, " << killed << " were vanquished, leaving just " << survivors << " in the group.\n";
	std::cout << "\nThe party was about to give up all hope. But while laying the deceased to rest, they stumbled upon the buried fortune, So the adventurers split " << GOLD_PIECES << " gold pieces. ";
	std::cout << leader << " held on to the extra " << GOLD_PIECES % 4 << "to keep things fair of course.";

	return 0;
}