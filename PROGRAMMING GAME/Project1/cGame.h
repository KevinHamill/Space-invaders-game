#ifndef _GAME_H
#define _GAME_H

/*
==================================================================================
cGame.h
==================================================================================
*/

#include <SDL.h>

// Game specific includes
#include "rocketGame.h"


using namespace std;

class cGame
{
public:
	cGame();

	void initialise(SDL_Window* theSDLWND, SDL_Renderer* theRenderer);
	void run(SDL_Window* theSDLWND, SDL_Renderer* theRenderer);
	void cleanUp(SDL_Window* theSDLWND);
	void render(SDL_Window* theSDLWND, SDL_Renderer* theRenderer);
	void render(SDL_Window* theSDLWND, SDL_Renderer* theRenderer, double rotAngle, SDL_Point* spriteCentre);
	void update();
	void update(float deltaTime);
	bool getInput(bool theLoop);
	float getElapsedSeconds();

	static cGame* getInstance();

private:

	static cGame* pInstance;

	// game related variables
	float m_lastTime;
	// Sprites for displaying background and rocket textures
	cSprite spriteBkgd;
	cRocket rocketSprite;
	// Game objects

};

#endif
