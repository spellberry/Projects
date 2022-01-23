#include "game.h"
#include "surface.h"
#include "template.h"
#define PARTICLES 4096
#include <cstdio> //printf

namespace Tmpl8
{
    int dotsx[100], dotsy[100];
    float x = 400, y = 256;

    void Game::Init() 
    {
        for (int i = 0; i < 100; ++i)
        {
            dotsx[i] = IRand(800), dotsy[i] = IRand(512);
        }
    }

    void Game::Shutdown() {}

    void Game::Tick(float deltaTime)
    {
        screen->Clear(0);
        screen->Line(mousex, 0, mousex, 511, 0xff0000);
        screen->Line(0, mousey, 799, mousey, 0xff0000);
        
        for (int i = 0; i < 100; ++i)
        {
            screen->GetBuffer()[dotsx[i] + dotsy[i] * 800] = 0xffffff;
            float dx = dotsx[i] - mousex, dy = dotsy[i] - mousey;
            float dist = sqrtf(dx * dx + dy * dy);
            if (dist < 50)
                dotsx[i] += dx / dist, dotsy[i] += dy / dist;
        }
        
        
    }
};