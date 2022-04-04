#include "Player.h"
#include "surface.h"
#include <iostream>
#include "template.h"


using namespace Tmpl8;


//Player default constructor
Player::Player()
{
	player = new Sprite(new Surface("assets/penguin/penguin.png"), 1);
	playerPositionX = 0;
	playerPositionY = 0;
	bool isAlive = true;
 
	playerHitbox = Hitbox(player->GetHeight(), player->GetWidth(), playerPositionX, playerPositionY);
}


//Draws the player sprite on the screen
void Player::DrawPlayer(Tmpl8::Surface* screen)
{
	player->Sprite::Draw(screen, static_cast<int>(playerPositionX), static_cast<int>(playerPositionY));
}

//Updates the X and Y coordinates of the player object
void Player::UpdatePlayerPosition(float x, float y, float deltaTime)
{
	playerPositionX += x * deltaTime;
	playerPositionY += y * deltaTime;
	//Updates the position of the hitbox to the player position
	playerHitbox.Update(playerPositionX, playerPositionY);
}

//Gets the player X and Y coordinates
std::pair<float, float> Player::GetPlayerPosition()
{
	return std::pair<float, float>(playerPositionX, playerPositionY);
}

void Player::SetPlayerPosition(float x, float y)
{
	playerPositionX = x;
	playerPositionY = y;

}

//Setting the booleans use to check whether the player is leaving the screen and prevents him from doing so
void Player::Bounds()
{
	hitTop = playerPositionY < 0;
	hitBottom = playerPositionY > (ScreenHeight - player->GetHeight());
	hitLeft = playerPositionX < 0;
	hitRight = playerPositionX > (ScreenWidth - player->GetWidth());
}

//Prevents the player from going out of bouds
void Player::CollisionCheck()
{
	if (hitTop)
	{
		playerPositionY = 0;
	}

	if (hitBottom)
	{
		playerPositionY = static_cast<float>(ScreenHeight - player->GetHeight());
	}

	if (hitLeft)
	{
		playerPositionX = 0;
	}

	if (hitRight)
	{
		playerPositionX = static_cast<float>(ScreenWidth - player->GetWidth());
	}
}

//Gets the hitbox of the player entity
Hitbox Player::GetHitbox()
{
	return playerHitbox;
}

bool Player::GetPlayerState()
{
	return isAlive;
}

void Player::SetPlayerState(bool playerState)
{
	isAlive = playerState;
}
