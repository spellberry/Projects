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

	
	void Game::DrawI(int x, int y)
	{
		screen->Line(100 + x, 50 + y, 200 + x, 50 + y, 0xffffff);
		screen->Line(150 + x, 50 + y, 150 + x, 300 + y, 0xffffff);
		screen->Line(100 + x, 300 + y, 200 + x, 300 + y, 0xffffff);
	}

	void Game::DrawFatI(int x, int y)
	{
		DrawI(x, y);
		DrawI(x+1, y);
		DrawI(x, y+1);
		DrawI(x+1, y+1);
	}

	// -----------------------------------------------------------
	// Main application tick function
	// -----------------------------------------------------------
	int x = 100;
	int y = 0;
	void Game::Tick(float deltaTime)
	{
		screen->Clear(80);
		DrawFatI(x++, 0);
		if (x == 600) {
			x = 0;
		}
	}
};