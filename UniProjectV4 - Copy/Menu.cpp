#include "Menu.h"

using namespace Tmpl8;

//Default constructor
Menu::Menu()
{
	menu = new Sprite(new Surface("assets/Menu/menu4.png"), 1);
	isActive = true;
}

void Menu::DrawMenu(Tmpl8::Surface* screen)
{
	screen->Clear(0);
	menu->Sprite::Draw(screen, 600, 300);
}

void Menu::SetMenuState(bool menuState)
{
	isActive = menuState;
}

bool Menu::GetMenuState()
{
	return isActive;
}


