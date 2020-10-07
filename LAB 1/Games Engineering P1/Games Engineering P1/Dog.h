#pragma once
#include "Character.h"

class Dog : public Character
{
public:
	void draw() {
		cout << "Bark" << endl;
	}

};