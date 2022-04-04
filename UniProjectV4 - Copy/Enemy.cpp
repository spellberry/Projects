#include "Enemy.h"

using namespace Tmpl8;

//Enemy class default constructor
Enemy::Enemy()
{
	enemy = new Sprite(new Surface("assets/Enemies/Icicle2.png"), 1);
	enemyPositionX = 0;
	enemyPositionY = 0;
	enemyHitbox = Hitbox(enemy->GetHeight(), enemy->GetWidth(), enemyPositionX, enemyPositionY);
	speed = 500;
}

Enemy::~Enemy()
{
	enemy = nullptr;
}
//Drawing the enemy sprite on the screen using the Draw function from the Sprite class
void Enemy::DrawEnemy(Surface* screen, float x, float y)
{
	enemy->Sprite::Draw(screen, static_cast<int> (x), static_cast<int> (y));
}

//Set the enemy position to specific coordinates passed into the function and constantly updates it
void Enemy::SetEnemyPosition(float x, float y)
{
	enemyPositionX = x;
	enemyPositionY = y;
	//Updates the position of the hitbox to the enemy position
	enemyHitbox.Update(enemyPositionX, enemyPositionY);
}

//Gets the X and Y coordinates of the enemy entity
std::pair<float, float> Enemy::GetEnemyPosition()
{
	return std::pair<float, float>(enemyPositionX, enemyPositionY);
}

//Gets the height and width of the enemy entity
std::pair<float, float> Enemy::GetEnemyHeightAndWidth()
{
	return std::pair<float, float>(static_cast<float>(enemy->GetHeight()), static_cast<float>(enemy->GetWidth()));
}
//Updates the position of the enemy entity
void Enemy::UpdateEnemyPosition(float x, float y, float deltaTime)
{
	enemyPositionX -= x * deltaTime;
	enemyPositionY += y * deltaTime;
	enemyHitbox.Update(enemyPositionX, enemyPositionY);
}

//Returns the speed of the entity
float Enemy::GetSpeed()
{
	return speed;
}

//Returns the hitbox of the enemy entity
Hitbox Enemy::GetHitbox()
{
	return enemyHitbox;
}
