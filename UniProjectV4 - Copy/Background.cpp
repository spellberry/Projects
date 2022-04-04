#include "Background.h"

using namespace Tmpl8;

//Initializing the background sprite
Background::Background()	
{
	background = new Sprite(new Surface("assets/background.png"), 1);
}

//Uses the Draw function from the Sprite class to display the background texture
void Background::DrawBackground(Tmpl8::Surface* screen)
{
	background->Draw(screen, 0, 0);
}