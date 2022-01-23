#include "game.h"
#include "surface.h"
#include <cstdio> //printf

namespace Tmpl8
{
	// -----------------------------------------------------------
	// Initialize the application
	// -----------------------------------------------------------
	void Game::Init()
	{
	}
	
	// -----------------------------------------------------------
	// Close down application
	// -----------------------------------------------------------
	void Game::Shutdown()
	{
	}

	static Sprite rotatingGun(new Surface("assets/aagun.tga"), 36);
	static int frame = 0;

	// -----------------------------------------------------------
	// Main application tick function
	// -----------------------------------------------------------

	Sprite theSprite(new Surface("assets/ball.png"), 1);

	float spriteY = 1;
	float speed = 1;
	void Game::Tick(float deltaTime)
	{
		
		screen->Clear(0);
		spriteY += speed;
		speed += 1.0f;
		if (spriteY > (512 - 50))
		{
			spriteY = 512 - 50;
			speed = -speed * 0.8;
		}
		theSprite.Draw(screen, 20, spriteY);
	}
};