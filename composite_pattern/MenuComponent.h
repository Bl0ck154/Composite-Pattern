#pragma once
#include "Header.h"
class MenuComponent
{
public:
	virtual void add(MenuComponent* menuComponent) = 0;
	virtual void remove(MenuComponent* menuComponent) = 0;
	virtual MenuComponent* getChild(int i) = 0;

	virtual string getName() = 0;
	virtual string getDescription() = 0;

	virtual double getPrice() = 0;
	virtual bool isVegiterian() = 0;
	virtual void print() = 0;
};