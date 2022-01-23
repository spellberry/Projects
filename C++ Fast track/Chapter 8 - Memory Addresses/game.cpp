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



	// -----------------------------------------------------------
	// Main application tick function
	// -----------------------------------------------------------

	Sprite theSprite (new Surface("assets/noise.png"), 1);
	void Game::Tick(float deltaTime)
	{
		//theSprite.Draw(screen, 0, 0);
		screen->Clear(800000);
		Pixel* address = screen->GetBuffer() + 400;
		for (int i = 0; i < 255; i++) address[i * 800] = i;
	}
};