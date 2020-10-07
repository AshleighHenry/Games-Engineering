#pragma once
#include "Character.h"
class Factory {
public:
	Factory() {}
	virtual Character* CreateDog() = 0;
	virtual Character* CreateBird() = 0;
	virtual Character* CreateAlien() = 0;

};