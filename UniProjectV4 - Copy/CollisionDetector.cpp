#include "CollisionDetector.h"

#include <algorithm>
#include <cassert>
#include <vector>
#include <iostream>

//Initializes the variables of the CollisionDetector class
CollisionDetector::CollisionDetector()
{
	m_player = nullptr;
	m_snowballContainer = nullptr;
	m_enemyContainer = nullptr;
}

//Takes the entities and the player to create variables between which there will be checks for collision
CollisionDetector::CollisionDetector(Player* player, SnowballTracker* snowballTracker, EnemyTracker* enemyTracker)
{
	m_player = player;
	m_snowballContainer = snowballTracker;
	m_enemyContainer = enemyTracker;
}


void CollisionDetector::HandleCollisions()
{
	//Creating references to the vectors of the entities
	auto &snowballs = m_snowballContainer->GetContainer();
	auto &enemies = m_enemyContainer->GetContainer();

	// Vector of indices within the entity vectors that need to be removed.
	std::vector< int > snowballIndicesToRemove;
	std::vector< int > enemyIndicesToRemove;

	   // Find all entities that are colliding
	for (int snowballIndex = 0; snowballIndex < snowballs.size(); snowballIndex++)
	{
		for (int enemyIndex = 0; enemyIndex < enemies.size(); enemyIndex++)
		{
			if (snowballs.at(snowballIndex).GetHitbox().Collides(enemies.at(enemyIndex).GetHitbox()))
			{
				//Adds data indexes of the items we want to remove from the vectors of the entities
				snowballIndicesToRemove.push_back(snowballIndex);
				enemyIndicesToRemove.push_back(enemyIndex);
			}
		}
	}

	//Taking the vector of entities we want to check for items to remove and creates a vector of indices within the entity vectors that need to be removed
	RemoveIndicesFromVector(snowballs, snowballIndicesToRemove);
	RemoveIndicesFromVector(enemies, enemyIndicesToRemove);

	
	//Checks for collision between the player and an entity from the 'enemies' vector
	for (Enemy enemy : enemies)
	{
		if (enemy.GetHitbox().Collides(m_player->GetHitbox()))
		{
			m_player->SetPlayerState(false);
			/*exit(0);*/
		}
	}
	
}

// VECTOR
// | 1 || 2 || 3 || 4 || 5 || 6 || 7 || 8 || 9 || 10 |
// ITEMS TO REMOVE
// | 2 || 7 || end |
/// source: https://codereview.stackexchange.com/questions/206686/removing-by-indices-several-elements-from-a-vector
template <typename T>
void CollisionDetector::RemoveIndicesFromVector(std::vector<T>& vector, std::vector<int> itemsToRemove)
{
	auto indexToRemove = itemsToRemove.begin();
	int current_index = 0;
	
	const auto predicate = [&](const T&)
	{
		// Any more indices to remove?
		if (indexToRemove == itemsToRemove.end())
		{
			// If there's no more to remove, return false, so none of the items can be removed!
			return false;
		}

		// Is the current index matching the index of the vector we are trying to remove it from?
		if (*indexToRemove == current_index++)
		{
			// Yes, so remove it and select the next index we want to remove.
			return ++indexToRemove, true;
		}

		// If both of these checks dont apply, don't remove!
		return false;
	};

	// The magical removing algorithm!
	vector.erase(std::remove_if(vector.begin(), vector.end(), predicate), vector.end());
}
