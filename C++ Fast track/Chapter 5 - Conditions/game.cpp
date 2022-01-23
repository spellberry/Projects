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
	int spriteX = 0;
	int spriteY = 100;
	int speed = 1;
	int speedX = 1;
	bool hitBottom = spriteY > 512 - 50;


	void Game::Tick(float deltaTime)
	{
		screen->Clear(0);
		theSprite.Draw(screen, spriteX, spriteY);
		spriteY += speed;
		spriteX += speedX;
		speed += 1;
		bool hitBottom = spriteY > (512 - 50);
		bool hitSide = spriteX > (800 - 50);
		
		printf("hitBottom: %i\n", hitBottom);
		if (hitBottom)
		{
			spriteY = 512 - 50;
			speed = -speed;
			screen->Clear(0xff0000);
			theSprite.Draw(screen, spriteX, spriteY);
		}
		else if (hitSide)
		{
			spriteX = 512 - 50;
			speedX = -speedX;
			screen->Clear(0xff0000);
			theSprite.Draw(screen, spriteX, spriteY);
		}
		else
		{
			screen->Clear(0);
			theSprite.Draw(screen, spriteX, spriteY);
		}
	}
};