#include "Hitbox.h"

//Default constructor
Hitbox::Hitbox()
{
	Hitbox(0, 0, 0, 0);
}

//Constructor used to create hitboxes for the different entities in the game
Hitbox::Hitbox(int e_height, int e_width, float e_posX, float e_posY)
{
	m_height = e_height;
	m_width = e_width;
	entityPositionX = e_posX;
	entityPositionY = e_posY;
	hitBoxHit = false;
}

//Updates the position of the hitbox to the position of the enemy entity
void Hitbox::Update(float newPositionX, float newPositionY)
{
	entityPositionX = newPositionX;
	entityPositionY = newPositionY;
}

bool Hitbox::Collides(Hitbox other)
{
	// algorithm source: https://developer.mozilla.org/en-US/docs/Games/Techniques/2D_collision_detection
	return entityPositionX < other.entityPositionX + other.m_width &&
		entityPositionX + m_width > other.entityPositionX &&
		entityPositionY < other.entityPositionY + m_height &&
		m_height + entityPositionY > other.entityPositionY;
}
