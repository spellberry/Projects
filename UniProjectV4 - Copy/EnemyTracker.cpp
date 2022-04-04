#include "EnemyTracker.h"

EnemyTracker::EnemyTracker()
{

}

void EnemyTracker::ClearEnemyTracker()
{
	enemies.clear();
}


void EnemyTracker::AddEnemy(Tmpl8::Surface* screen)
{
		//Creates a new enemy object
		Enemy enemy = Enemy();
		//Sets the position of the entity in a random spot on the Y axis
		enemy.SetEnemyPosition(static_cast<float>(ScreenWidth), static_cast<float>(rand() % ScreenHeight));

		//Adds an enemy entity to the vector
		enemies.push_back(enemy);
}

void EnemyTracker::MoveEnemies(Tmpl8::Surface* screen, float deltaTime)
{
	for (auto pEnemy = enemies.begin(); pEnemy != enemies.end(); pEnemy++)
	{
		//Updates the position of the enemies and moves them across the screen
		pEnemy->UpdateEnemyPosition(pEnemy->GetSpeed(), 0, deltaTime);
		pEnemy->DrawEnemy(screen, pEnemy->GetEnemyPosition().first, pEnemy->GetEnemyPosition().second);
	}

}

//Checks if any of the enemy entities are out of bounds of the left screen border
void EnemyTracker::CheckEnemyOutOfBounds()
{
	//Delets any enemy entities that are off-screen (out of bounds)
	enemies.erase
	(
		std::remove_if
		(enemies.begin(), enemies.end(), [](Enemy enemy) {return enemy.GetEnemyPosition().first < -enemy.GetEnemyHeightAndWidth().second;}), enemies.end()
	);

}

//Function used to get the vector of the enemy entities
std::vector<Enemy>& EnemyTracker::GetContainer()
{
	return enemies;
}

