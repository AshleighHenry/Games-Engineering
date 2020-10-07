#pragma once
#include "Character.h"

class Bird : public Character
{
public:
	void draw() {
		cout << "Chirp" << endl;
	}

};