#include "FactoryProxy.h"
FactoryProxy::FactoryProxy()
{
	this->factory = 0;
}
FactoryProxy::~FactoryProxy()
{
	if (factory)
		delete factory;
}

Factory* FactoryProxy::getInstance(void)
{
	if (!factory)
	{
		factory = new CharacterFactory();
	}
	return factory;
}
void FactoryProxy::Draw()
{
	getInstance()->Draw();
}
