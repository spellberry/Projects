#pragma once
#include "Player.h"
#include "SnowballTracker.h"
#include "EnemyTracker.h"


class CollisionDetector
{
public:

	//Default constructor for the collision detector
	CollisionDetector();

	//Gets the player object and the vectors of the snowball and enemy entities
	CollisionDetector(Player* player, SnowballTracker* snowballs, EnemyTracker* enemies);

	//Handles the collision and deletes the necessary elements
	void HandleCollisions();

private:
	//Pointers to the player object and the vectors of the snowball and enemy entities
	Player* m_player;
	SnowballTracker* m_snowballContainer;
	EnemyTracker* m_enemyContainer;


	template<typename T>
	void RemoveIndicesFromVector(std::vector<T>& vector, std::vector<int> itemsToRemove);

};
