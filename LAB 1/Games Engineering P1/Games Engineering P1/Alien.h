#pragma once
#include "Character.h"

class Alien : public Character
{
public:
	void draw() {
		cout << "Hiss" << endl;
	}

};