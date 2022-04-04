#pragma once

#include <vector>

#include "template.h"
#include "Snowball.h"

class SnowballTracker : public Snowball
{
	
public:

	//Default constructor
	SnowballTracker();

	void ClearSnowballTracker();

	// Adds snowball objects to the 'snowballs' vector
	void AddSnowball(Tmpl8::Surface* screen, float playerPosX, float playerPosY);

	// Moves the snowball projectiles on the X axis
	void MoveSnowballs(Tmpl8::Surface* screen, float deltaTime);

	// Checks if balls are out of bounds, if so disposes of them.
	void CheckOutOfBounds();

	std::vector<Snowball>& GetContainer();


private:

	//Vector of snowball entities
	std::vector<Snowball> snowballs;
};