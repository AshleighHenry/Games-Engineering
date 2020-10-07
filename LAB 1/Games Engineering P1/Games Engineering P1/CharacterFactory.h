#pragma once
#include "Factory.h"
class CharacterFactory : public Factory
{
public:
	Character* CreateDog() {
		return new Dog;
	}

	Character* CreateBird() {
		return new Bird;
	}

	Character* CreateAlien() {
		return new Alien;
	}
};