#pragma once
#include <utility>
#include <vector>

#include "Hitbox.h"
#include "Player.h"
#include "SDL_scancode.h"
#include "surface.h"

class Snowball
{
public:

	//Constructor
	Snowball();

	//Draws the snowball on the screen
	void DrawSnowball(Tmpl8::Surface* screen, int x, int y);

	//Setter
	void SetSnowballPosition(float x, float y);

	//Returns the coordinates of the snowball object
	std::pair<float, float> GetSnowballPosition();

	//Gets the height and width of the snowball sprite
	std::pair<float, float> GetSnowballHeightAndWidth();

	//Moves the snowball on the screen
	void UpdateSnowballPosition(float x, float y, float deltaTime);

	// Gets the speed of the snowball entity
	float GetSpeed();

	//Gets the hitbox of the snowball entity
	Hitbox GetHitbox();


private:

	Tmpl8::Sprite* snowball;

	Hitbox snowballHitbox;

	// Snowball starting position
	float snowballPositionX;
	float snowballPositionY;

	// Speed of the snowball objects
	float speed;
};