#pragma once
#include "surface.h"

class Menu
{
public:

	//Default constructor
	Menu();

	//Draws the menu sprite
	void DrawMenu(Tmpl8::Surface* screen);

	//Sets the state of the menu
	void SetMenuState(bool menuState);

	//Gets the state of the menu
	bool GetMenuState();


private:

	Tmpl8::Sprite* menu;

	//Check if the player is in the menu
	bool isActive;
};

