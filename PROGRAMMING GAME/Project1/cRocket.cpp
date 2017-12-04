/*
=================
cRocket.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cRocket.h"

/*
=================================================================
Initialise the sprite variables
=================================================================
*/

void cRocket::initialise()
{
	rocketVelocity = { 0, 0 };
	rocketRotAngle = 0;
	rocketSpeed = 0;
	rocketPosX = 500;
}

//void cRocket::render()
//{
//}
/*
=================================================================
Update the sprite position
=================================================================
*/

void cRocket::update(float deltaTime)
{

	SDL_Rect currentSpritePos = this->getSpritePos();
	//if ((rocketSpeed > 0) && (rocketPosX > 0))
	{
		currentSpritePos.x += rocketVelocity.x;
	}
	currentSpritePos.y += rocketVelocity.y;

	this->setSpritePos({ currentSpritePos.x , currentSpritePos.y });
	this->rocketVelocity = {0,0};
}
/*
=================================================================
  Sets the velocity for the rocket
=================================================================
*/
void cRocket::setRocketVelocity(SDL_Point rocketVel)
{
	rocketVelocity = rocketVel;
	
}
/*
=================================================================
  Gets the rocket velocity
=================================================================
*/
SDL_Point cRocket::getRocketVelocity()
{
	return rocketVelocity;
}
/*
=================================================================
Sets the rotation angle for the rocket
=================================================================
*/
void cRocket::setRocketRotation(double theRotAngle)
{
	rocketRotAngle = theRotAngle;
}
/*
=================================================================
Gets the rotation angle for the rocket
=================================================================
*/
double cRocket::getRocketRotation()
{
	return rocketRotAngle;
}
/*
=================================================================
Gets the position on the X axis for the rocket
=================================================================
*/
void cRocket::setRocketPosX(int addPosX)
{
	rocketPosX += addPosX;
}