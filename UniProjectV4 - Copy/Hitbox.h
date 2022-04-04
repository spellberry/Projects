#pragma once
#include <algorithm>
//#include "Enemy.h"
//#include "Snowball.h"

class Hitbox
{
public:

	//Default constructor
	Hitbox();

	//Constructor used to create new hitboxes for the different entities
	Hitbox(int e_height, int e_width, float e_posX, float e_posY);

	//Updates the position of the hitbox
	void Update(float entityPositionX, float entityPositionY);

	//Checks for a collision
	bool Collides(Hitbox other);


private:

	//X and Y coordinates of the entity 
	float entityPositionX;
	float entityPositionY;

	//Width and height of the hitbox
	int m_width;
	int m_height;

	//Boolean used to check for collision
	bool hitBoxHit;

};

