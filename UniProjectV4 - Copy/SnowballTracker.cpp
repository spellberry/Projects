#include "SnowballTracker.h"

SnowballTracker::SnowballTracker()
{

}

void SnowballTracker::ClearSnowballTracker()
{
	snowballs.clear();
}

void SnowballTracker::AddSnowball(Tmpl8::Surface* screen, float playerPosX, float playerPosY)
{
	
	//Creates a new enemy object
	Snowball snowball = Snowball();
	//Sets the position of the entity in front of the player sprite
	snowball.SetSnowballPosition(playerPosX + 50, playerPosY + 18);

	//Adds an enemy entity to the vector
	snowballs.push_back(snowball);
}


void SnowballTracker:: MoveSnowballs(Tmpl8::Surface* screen, float deltaTime)
{
	//Goes through the vector and checks if there are any elements in it
	for (auto pSnowball = snowballs.begin(); pSnowball != snowballs.end(); pSnowball++)
	{
		//Updates the position of the enemies and moves them across the screen
		pSnowball->UpdateSnowballPosition(pSnowball->GetSpeed(), 0, deltaTime);
		pSnowball->DrawSnowball(screen, static_cast <int>(pSnowball->GetSnowballPosition().first),  static_cast<int>(pSnowball->GetSnowballPosition().second));
	}
}

//Checks if any of the snowball entities are out of bounds of the right screen border
void SnowballTracker::CheckOutOfBounds()
{
	// 	//Delets any snowball entities that are off-screen (out of bounds)
	snowballs.erase(
		std::remove_if(snowballs.begin(), snowballs.end(), [](Snowball snowball) { return snowball.GetSnowballPosition().first > ScreenWidth; }), snowballs.end());
}

//Function used to get the vector of the enemy entities
std::vector<Snowball>& SnowballTracker::GetContainer()
{
	return snowballs;
}
