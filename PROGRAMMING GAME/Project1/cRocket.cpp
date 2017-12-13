/*
=================
cRocket.cpp
- Header file for class definition - IMPLEMENTATION
=================
*/
#include "cRocket.h"

/*
=================================================================
Defualt Constructor
=================================================================
*/
cRocket::cRocket() : cSprite()
{
	this->rocketVelocity = { 0, 0 };
}
/*
=================================================================
Update the sprite position
=================================================================
*/

void cRocket::update(double deltaTime)
{
	

		FPoint direction = { 0.0f, 0.0f };
		SDL_Rect currentSpritePos = this->getSpritePos();
		if (!(currentSpritePos.x > 800) && !(currentSpritePos.x < 0))
		{
			currentSpritePos.x += rocketVelocity.x;
		}
		else if (currentSpritePos.x > 800)
		{
			currentSpritePos.x = 800;
		}
		else if (currentSpritePos.x < 0)
		{
			currentSpritePos.x = 0;
		}
		this->rocketVelocity = { 0,0 };

		this->setSpritePos({ currentSpritePos.x , currentSpritePos.y });
		this->setBoundingRect(this->getSpritePos());
	

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
Update the sprite position
=================================================================
*/


//
//	glm::vec2 spriteVelocityAdd = glm::vec2(0.0f, 0.0f);
//	spriteVelocityAdd.x = (glm::sin(glm::radians(spriteRotation)));
//	spriteVelocityAdd.y = -(glm::cos(glm::radians(spriteRotation)));
//
//	spriteVelocityAdd *= spriteTranslation;
//
//	rocketVelocity += spriteVelocityAdd;
//
//	spritePos2D += rocketVelocity * deltaTime;
//
//	rocketVelocity *= 0.95;
//
//	/*
//	==============================================================
//	| Check for collisions
//	==============================================================
//	*/
//	for (vector<cBullet*>::iterator bulletIterartor = theRocketBullets.begin(); bulletIterartor != theRocketBullets.end(); ++bulletIterartor)
//	{
//		(*bulletIterartor)->update(deltaTime);
//		for (vector<cAsteroid*>::iterator asteroidIterator = theAsteroids.begin(); asteroidIterator != theAsteroids.end(); ++asteroidIterator)
//		{
//			if ((*asteroidIterator)->collidedWith((*asteroidIterator)->getBoundingRect(), (*bulletIterartor)->getBoundingRect()))
//			{
//				// if a collision set the bullet and asteroid to false
//				(*asteroidIterator)->setActive(false);
//				(*bulletIterartor)->setActive(false);
//			}
//		}
//	}
//
//	vector<cBullet*>::iterator bulletIterartor = theRocketBullets.begin();
//	while (bulletIterartor != theRocketBullets.end())
//	{
//		if ((*bulletIterartor)->isActive() == false)
//		{
//			bulletIterartor = theRocketBullets.erase(bulletIterartor);
//		}
//		else
//		{
//			//(*bulletIterartor)->update(deltaTime);
//			(*bulletIterartor)->render();
//			(*bulletIterartor)->renderCollisionBox();
//			++bulletIterartor;
//		}
//	}
//}