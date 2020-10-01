#include <iostream>
#include <vector>
using namespace std;

class Character
{
public:
	Character() {}
	
	~Character() {}
	
	virtual void draw() = 0;
	
};

class Player : public Character
{
public:
	
	void draw() {
		cout << "Draw Player" << endl;		
	}

};
class Dog : public Character
{
public:
	Dog() {

	}
	void draw() {
		cout << "Draw Dog" << endl;
	}

};

class Sword : public Character
{
public:
	Sword(){}
	void draw() {
		cout << "Draw Sword" << endl;
	}
};

class Boss :public Character
{
public:
	void draw() {
		cout << "Draw Boss" << endl;
	}
};


class Factory {
public:
	virtual Character* CreatePlayer() = 0;
	virtual Character* CreateOpponents() = 0;
	virtual Character* CreateDog() = 0;
	virtual Character* CreateSword() = 0;
		
};
// for non static? i dunno man
//class Factory
//{
//public:
//	Character* CreatePlayer() {
//		return new Player;
//	}
//	Character* CreateOpponents() {
//		return new Boss;
//	}
//	Character* CreateDog() {
//		return new Dog;
//	}
//	Character* CreateSword() {
//		return new Sword;
//	}
//};


class CharacterFactory : public Factory
{
public:
	Character* CreatePlayer() {
		return new Player;
	}

	Character* CreateOpponents() {
		return new Boss;
	}
	Character* CreateDog() {
		return new Dog;
	}
	Character* CreateSword() {
		return new Sword;
	}
};
int main()
{
	Factory* factory = new CharacterFactory;
	
	vector<Character*> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());
	characters.push_back(factory->CreateDog());
	characters.push_back(factory->CreateSword());
	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}
	
	return 0;
}