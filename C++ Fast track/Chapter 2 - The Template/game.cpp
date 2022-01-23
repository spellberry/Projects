#include "game.h"
#include "surface.h"
#include "template.h"
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
	void Game::Tick(float deltaTime)
	{
		// clear the graphics window
		screen->Clear(0);
		// print something in the graphics window
		screen->Print("hello world", 2, 2, 0xffffff);
		// clear the graphics window
		screen->Clear(0);
		// print something in the graphics window
		screen->Print("hello world", 640, 20, 0x0000ff);
		// print something to the text window
		printf("this goes to the console window.\n");

		//Letter 'C'
		screen->Line(80, 300, 120, 300, 0xff0000);
		screen->Line(80, 300, 80, 360, 0xff0000);
		screen->Line(80, 360, 120, 360, 0xff0000);

		//Letter 'O'
		screen->Line(140, 300, 180, 300, 0XBF9000);
		screen->Line(140, 300, 140, 360, 0XBF9000);
		screen->Line(180, 300, 180, 360, 0XBF9000);
		screen->Line(140, 360, 180, 360, 0XBF9000);

		//Letter 'D'
		screen->Line(205, 300, 205, 360, 255);
		screen->Line(205, 300, 220, 330, 255);
		screen->Line(205, 360, 220, 330, 255);

		//Letter 'E'
		screen->Line(240, 300, 240, 360, 0x00ff00);
		screen->Line(240, 300, 280, 300, 0x00ff00);
		screen->Line(240, 330, 280, 330, 0x00ff00);
		screen->Line(240, 360, 280, 360, 0x00ff00);
	}
};