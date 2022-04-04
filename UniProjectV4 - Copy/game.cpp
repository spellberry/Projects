
#include<crtdbg.h>


#include "game.h"
#include "surface.h"
#include "Player.h"
#include "Background.h"

#include <iostream>

namespace Tmpl8
{


	Game::Game()
		:screen()
	{
		background = new Background();
		player = new Player();
	}
	void Game::Init()
	{
		snowballTracker = new SnowballTracker();
		enemyTracker = new EnemyTracker();
		collisionDetector = CollisionDetector(player, snowballTracker, enemyTracker);
		menu = new Menu();
		playerInputTimer->Get();
		enemyTimer->Get();
		
	}

	void Game::Shutdown()
	{
		delete background;
		delete enemyTimer;
		delete enemyTracker;
		delete playerInputTimer;
		delete menu;
		delete screen;
		delete snowballTracker;
	}
	

	void Game::KeyUp(SDL_Scancode key)
	{
		
		switch (key)
		{
			case SDL_SCANCODE_W:
				m_up = 0;
				break;

			case SDL_SCANCODE_S:
				m_down = 0;
				break;

			case SDL_SCANCODE_A:
				m_left = 0;
				break;

			case SDL_SCANCODE_D:
				m_right = 0;
				break;

			case SDL_SCANCODE_P:
				shoot = 0;
				break;

			default:
				break;
		}
		
	}

	void Game::KeyDown(SDL_Scancode key)
	{
		
		switch (key)
		{
			case SDL_SCANCODE_W:
				m_up = 1;
				break;

			case SDL_SCANCODE_S:
				m_down = 1;
				break;

			case SDL_SCANCODE_A:
				m_left = 1;
				break;

			case SDL_SCANCODE_D:
				m_right = 1;
				break;

			case SDL_SCANCODE_P:
				shoot = 1;
				menu->SetMenuState(false);
				break;

			default:
				break;
		}
	}

	

	void Game::Tick(float deltaTime)
	{
		//Handles the title screen
		if (menu->GetMenuState() == true)
		{
			menu->DrawMenu(screen);
			player->SetPlayerState(true);
		}

		else
		{

			// Starting the timers
			playerInputTimer->Tick();
			enemyTimer->Tick();
			

			// Clearing the screen
			screen->Clear(0);

			// Drawing the player object and the background
			background->DrawBackground(screen);
			player->DrawPlayer(screen);

			
			// Handling the player movement
			if (m_down)
				player->UpdatePlayerPosition(0, 600, deltaTime);
				
			if (m_up)
				player->UpdatePlayerPosition(0, -600, deltaTime);
			 
			if (m_left)
				player->UpdatePlayerPosition(-600, 0, deltaTime);
				
			if (m_right)
				player->UpdatePlayerPosition(600, 0, deltaTime);

			

			// Handling the player boundaries
			player->Bounds();
			player->CollisionCheck();

			//Whenever the shoot key is pressed and every 250 ms this if statement occurs
			if (shoot && playerInputTimer->TotalTimeMilliseconds() > 300)
			{
				//Whenever the if statement is fulfilled a snowball is added to the vector of snowball entities
				snowballTracker->AddSnowball(screen, player->GetPlayerPosition().first, player->GetPlayerPosition().second);
				playerInputTimer->Reset();
			}
			//This handles the snowball movement on the screen 
			snowballTracker->MoveSnowballs(screen, deltaTime);

			//Checks if any of them are out of bounds
			snowballTracker->CheckOutOfBounds();


			//Enemy spawner, handles the vector of enemies
			
			if (enemyTimer->TotalTimeMilliseconds() > 125)
			{
				enemyTracker->AddEnemy(screen);
				enemyTimer->Reset();
			}
			//Moves the enemy entites on the screen
			enemyTracker->MoveEnemies(screen, deltaTime);

			//Checks if the enemies are either being hit or are out of bounds
			enemyTracker->CheckEnemyOutOfBounds();

			// Checks for collision
			collisionDetector.HandleCollisions();

			//If the player dies, you are sent back to the title screen
			if (player->GetPlayerState() == false)
			{
				menu->SetMenuState(true);
				player->SetPlayerPosition(0, 0);
				player->UpdatePlayerPosition(0, 0, deltaTime);
				enemyTracker->ClearEnemyTracker();
				snowballTracker->ClearSnowballTracker();
			}

		}
		
	}
	
};