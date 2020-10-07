#pragma once
#include "Factory.h"
#include "Characterfactory.h"
class FactoryProxy : public Factory
{
public:
	FactoryProxy() {}
	~FactoryProxy() {}
	void Draw();
private:
	Factory* factory;
	Factory* getInstance(void);
};