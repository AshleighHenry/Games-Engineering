#include <iostream>
using namespace std;


class DrawAPI
{
public:
	virtual void Draw() = 0;
};

class DrawImpl : public DrawAPI
{
public:
	void Draw() {
		cout << "Draw IMPL" << endl;
	}
};

class Character
{
public:
	virtual void Draw() = 0;
};


class Player : public Character
{
public:
	Player(DrawAPI* api)
	{ 
		this->api = api;
	}
	void Draw() 
	{ 
		api->Draw();
	}
private:
	DrawAPI* api;
};

int main(void)
{
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();
	
	return 0;
}
