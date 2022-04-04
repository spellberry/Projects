#include "Player.h"
#include "Snowball.h"
#include "surface.h"
#include "template.h"

#include <iostream>


using namespace Tmpl8;

//Snowball class default constructor
Snowball::Snowball()
{
	snowball = new Sprite(new Surface("assets/snowball/snowball.png"), 1);
	snowballHitbox = Hitbox(snowball->GetHeight(), snowball->GetWidth(), snowballPositionX, snowballPositionY);
	snowballPositionX = 0;
	snowballPositionY = 0;

	// Default projectile speed 
	speed = 1000;
}


void Snowball::DrawSnowball(Surface* screen, int x, int y)
{
	snowball->Sprite::Draw(screen, x, y);
}

void Snowball::SetSnowballPosition(float x, float y)
{
	snowballPositionX = x;
	snowballPositionY = y;
	snowballHitbox.Update(snowballPositionX, snowballPositionY);
}

/// <summary>
/// Gets ball position
/// </summary>
/// <returns> first for x, second for y</returns>
std::pair<float, float> Snowball::GetSnowballPosition()
{
	return std::pair<float, float>(snowballPositionX, snowballPositionY);
}

//Gets the height and width variables of the snowball entity
std::pair<float, float> Snowball::GetSnowballHeightAndWidth()
{
	return std::pair<float, float>(static_cast<float>(snowball->GetHeight()), static_cast<float>(snowball->GetWidth()));
}

//Constantly updates the position of the snowbll entity and also updates the position of the hitbox of that entity
void Snowball::UpdateSnowballPosition(float x, float y, float deltaTime)
{
	snowballPositionX += x * deltaTime;
	snowballPositionY += y * deltaTime;
	//Updates the position of the hitbox to the snwoball position
	snowballHitbox.Update(snowballPositionX, snowballPositionY);
}

//Gets the speed variable of the snowball entity
float Snowball::GetSpeed()
{
	return speed;
}

//Gets the hitbox of the snowball entity
Hitbox Snowball::GetHitbox()
{
	return snowballHitbox;
}
