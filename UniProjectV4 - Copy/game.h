#pragma once

#include "Background.h"
#include "Enemy.h"
#include "EnemyTracker.h"
#include "Hitbox.h"
#include "Menu.h"
#include "Player.h"
#include "Timer.h"
#include "surface.h"
#include "SnowballTracker.h"
#include "CollisionDetector.h"


namespace Tmpl8 {

	class Surface;
	class Game
	{
	public:
		Game();

		void SetTarget(Surface* surface) { screen = surface; }
		void Init();
		void Shutdown();;
		void Tick(float deltaTime);
		void MouseUp(int button) { /* implement if you want to detect mouse button presses */ }
		void MouseDown(int button) { /* implement if you want to detect mouse button presses */ }
		void MouseMove(int x, int y) { /* implement if you want to detect mouse movement */ }
		void KeyUp(SDL_Scancode key);
		void KeyDown(SDL_Scancode key);

	private:

		//Pointers to the background sprite
		Background* background = nullptr;

		// Pointers to the enemy entity trackers
		CollisionDetector collisionDetector;
		SnowballTracker* snowballTracker = nullptr;
		EnemyTracker* enemyTracker = nullptr;

		//Pointer to the player entity
		Player* player;

		//Pointer to the Surface class
		Surface* screen = nullptr;

		Menu* menu = nullptr;

		//Pointer f
		Timer* playerInputTimer = new Timer();
		Timer* enemyTimer = new Timer();


		//Variables used in functions 'KeyUp and 'KeyDown' to check if a key is pressed
		int m_left = 0;
		int m_right = 0;
		int m_up = 0;
		int m_down = 0;

		//Variables used to change the X and Y coordinates of the player
		int dx = 0;
		int dy = 0;

		//Boolean shoot used to check if the shoot key is pressed
		bool shoot = false;
	};

}; // namespace Tmpl8