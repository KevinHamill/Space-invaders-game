/*
=================
cAsteroid.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cAsteroid.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cAsteroid::cAsteroid() : cSprite()
{
	this->asteroidVelocity = { 0, 0 };
}
/*
=================================================================
Update the sprite position
=================================================================
*/

void cAsteroid::update(double deltaTime)
{

	this->setSpriteRotAngle(this->getSpriteRotAngle() +(5.0f * deltaTime)); 
	if (this->getSpriteRotAngle() > 360)
	{
		this->setSpriteRotAngle(this->getSpriteRotAngle() -360);
	}
	
	SDL_Rect currentSpritePos = this->getSpritePos();
	currentSpritePos.x += asteroidVelocity.x;
	this->setBoundingRect(this->getSpritePos());
	if (currentSpritePos.x >= 800 || currentSpritePos.x <= 0)
	{
		int velocityX = asteroidVelocity.x - asteroidVelocity.x*2;
		SDL_Point newVel = { velocityX, (asteroidVelocity.y) };
		this->setAsteroidVelocity(newVel);
		currentSpritePos.y += 50;
	}
	this->setSpritePos({ currentSpritePos.x, currentSpritePos.y });
}
/*
=================================================================
  Sets the velocity for the Asteroid
=================================================================
*/
void cAsteroid::setAsteroidVelocity(SDL_Point AsteroidVel)
{
	asteroidVelocity = AsteroidVel;
}
/*
=================================================================
  Gets the Asteroid velocity
=================================================================
*/
SDL_Point cAsteroid::getAsteroidVelocity()
{
	return asteroidVelocity;
}
