#pragma once
#include "surface.h"
#include "template.h"

class Background
{
public:

	//Default constructor
	Background();

	//Draws the background texture
	void DrawBackground(Tmpl8::Surface* screen);

private:

	Tmpl8::Sprite* background;

	//Height and with of the background texture
	float backgroundWidth = ScreenWidth;
	float backgroundHeight = ScreenHeight;

};