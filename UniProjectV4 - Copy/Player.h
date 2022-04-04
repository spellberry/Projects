#pragma once
#include <utility>

#include "Hitbox.h"
#include "surface.h"
#include "SDL_scancode.h"
#include "SDL_events.h"
#include "Timer.h"


class Player
{
public:
	//Constructor
	Player();
	
	//Draw the player object on the screen
	void DrawPlayer(Tmpl8::Surface* screen);

	//Gets the X and Y coordinates of the player
	std::pair <float, float> GetPlayerPosition();

	//Sets the player X and Y coordinates
	void SetPlayerPosition(float x, float y);

	// Moves the player sprite
	void UpdatePlayerPosition(float x, float y, float deltaTime);

	//Gives conditions for the boundaries of the screen
	void Bounds();

	//Preventing the player from going off-screen
	void CollisionCheck();

	//Returns the player Hitbox
	Hitbox GetHitbox();

	//Indicates if the player is dead or alive
	bool GetPlayerState();

	//Sets the state of the player
	void SetPlayerState(bool playerState);


private:

	Tmpl8::Sprite* player;

	Hitbox playerHitbox;

	//Starting player position
	float playerPositionX = 100;
	float playerPositionY = 400;

	//Booleans used to check if the player is going out of the screen boundaries
	bool hitTop = false;
	bool hitBottom = false;
	bool hitLeft = false;
	bool hitRight = false;

	bool isAlive = true;

	Timer* deltaTimeTimer = new Timer();
};