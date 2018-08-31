#pragma once
#include "MenuComponent.h"
class Menu : public MenuComponent
{
protected:
	set<MenuComponent*> menuItems;
	string name;
	string description;
	virtual double getPrice() { return 0.0; };
	virtual bool isVegiterian() { return false; };
public:
	Menu() {}
	~Menu() {
		for (set<MenuComponent*>::iterator it = menuItems.begin(); it != menuItems.end(); it++)
		{
	//		delete *it;
		}
	}
	Menu(string name, string description) : name(name), description(description) {

	}
	virtual void add(MenuComponent* menuComponent) {
		menuItems.insert(menuComponent);
	}
	virtual void remove(MenuComponent* menuComponent) {
		menuItems.erase(menuComponent);
	}
	virtual string getName() {
		return name;
	}
	virtual string getDescription() {
		return description;
	}
	virtual MenuComponent* getChild(int i) {
		set<MenuComponent*>::iterator it = menuItems.begin();
		advance(it, i);
		return *it;
	}
	virtual void print() {
		cout << name << "   --   " << description << endl;

		for each (MenuComponent* var in menuItems)
		{
			var->print();
		}
	};
};