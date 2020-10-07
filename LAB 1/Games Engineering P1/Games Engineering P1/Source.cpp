// character factory
// will produces
// proxy will be a hook to the factory
// factory will produce pointers to birds dogs cats, which is used as part of the game loop
//

// so the proxy calls to the factory? factory makes characters.

// factory creates the characters then the proxy stores them and draws them
#include "CharacterFactory.h"
#include <vector>

int main()
{

	Factory* factory = new CharacterFactory;
	vector<Character*> characters;
	characters.push_back(factory->CreateDog());
	characters.push_back(factory->CreateAlien());
	characters.push_back(factory->CreateBird());

	for (int i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}
	return 0;
}