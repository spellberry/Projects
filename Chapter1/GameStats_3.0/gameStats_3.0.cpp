//Game Stats 3.0
//Introduction to enumertaors

#include <iostream>

int main() {
	const int alienPoints = 150;
	int aliensKilled = 10;
	int score = aliensKilled * alienPoints;
	std::cout << "Score: " << score << std::endl;
	
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;

	std::cout << "To upgrade my ship to a Cruiser I need: " << CRUISER_COST - myShipCost << " resource points" << std::endl;
}
