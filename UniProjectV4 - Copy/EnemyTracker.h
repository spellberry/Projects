#pragma once
#include <vector>

#include "Enemy.h"
#include "template.h"
#include "Snowball.h"

class EnemyTracker : public Enemy
{
public:

	//Default constructor
	EnemyTracker();

	void ClearEnemyTracker();
	//Adds enemy objects to the 'enemies' vector and draws them
	void AddEnemy(Tmpl8::Surface* screen);

	//Moves the enemies on the screen
	void MoveEnemies(Tmpl8::Surface* screen, float deltaTime);

	// Checks if enemies are out of bounds, if so disposes of them.
	void CheckEnemyOutOfBounds();

	std::vector<Enemy>& GetContainer();
	

private:

	//A vector of enemy objects
	std::vector<Enemy> enemies;

};

