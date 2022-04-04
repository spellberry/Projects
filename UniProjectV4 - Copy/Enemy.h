#pragma once
#include <vector>

#include "Hitbox.h"
#include "Player.h"
#include "surface.h"
#include "template.h"

class Enemy : public Hitbox
{
public:

	//Default constructor
	Enemy();

	~Enemy();

	//Draws the enemy sprite
	void DrawEnemy(Tmpl8::Surface* screen, float x, float y);

	//Setter
	void SetEnemyPosition(float x, float y);

	//Returns the coordinates of the enemy object
	std::pair<float, float> GetEnemyPosition();

	//Gets the height and width of the enemy sprite
	std::pair<float, float> GetEnemyHeightAndWidth();
	
	//Moves the enemy on the screen
	void UpdateEnemyPosition(float x, float y, float deltaTime);

	//Returns speed of enemy object
	float GetSpeed();

	Hitbox GetHitbox();

private:

	Tmpl8::Sprite* enemy;

	//Position variables for the enemy enetities
	float enemyPositionX;
	float enemyPositionY;

	//Hitbox of the enemy
	Hitbox enemyHitbox;

	//Speed of the enemy objects
	float speed;
};

