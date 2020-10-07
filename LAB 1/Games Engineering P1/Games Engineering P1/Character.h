#pragma once
#include <iostream>
using namespace std;

class Character
{
public:
	Character()
	{

	}
	virtual ~Character()
	{

	}
	virtual void draw() = 0;
};

class Bird : public Character
{
public:
	void draw() {
		cout << "Chirp" << endl;
	}

};


class Alien : public Character
{
public:
	void draw() {
		cout << "Hiss" << endl;
	}

};

class Dog : public Character
{
public:
	void draw() {
		cout << "Bark" << endl;
	}

};