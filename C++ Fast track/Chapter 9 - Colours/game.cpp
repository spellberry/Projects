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
	Sprite theSprite(new Surface("assets/image.jpg"), 1);
	

	void Game::Tick(float deltaTime)
	{
		//screen->Clear(80);
		//for (int i = 0; i < 257; ++i)
		//{
		//	screen->Clear(i);
		//}
		
		screen->Line(0, 0, 0, 200, 255);
		screen->Line(0, 0, 200, 0, 255);
		
		for (int i = 0; i < 200; i+=40)
		{
			screen->Line(i+40, 0, i+40, 200, 255);
			screen->Line(0, i+40, 200, i+40, 255);
		}
	}
};