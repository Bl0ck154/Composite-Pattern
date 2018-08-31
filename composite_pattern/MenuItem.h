#pragma once
#include "Header.h"
#include "MenuComponent.h"
class MenuItem : public MenuComponent
{
	string name;
	string description;
	double price;
	bool isVegeterian;

	virtual void add(MenuComponent* menuComponent) {};
	virtual void remove(MenuComponent* menuComponent) {};
	virtual MenuComponent* getChild(int i) { return nullptr; };
public:
	MenuItem(string name, string description, double price, bool isVegeterian) {
		this->name = name;
		this->description = description;
		this->price = price;
		this->isVegeterian = isVegeterian;
	}
	virtual string getName() {
		return name;
	}
	virtual string getDescription() {
		return description;
	}
	virtual double getPrice() {
		return price;
	}
	virtual bool isVegiterian() {
		return isVegeterian;
	}
	virtual void print() {
		cout << name << (isVegeterian ? " (v), " : ", ") << price << "   --   " << description << endl;
	}
};