#pragma once
#include "Header.h"
#include "Menu.h"
#include "MenuItem.h"
class PancakeHouseMenu : public Menu {
public:
	PancakeHouseMenu(string name, string description) {
		this->name = name;
		this->description = description;
		add(new MenuItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", 2.99, true));
		add(new MenuItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", 2.99, true));
		add(new MenuItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", 3.49, true));
		add(new MenuItem("Waffles", "Waffles, with your choice of blueberries or strawberries", 3.59, true));
	}
	virtual void print() {
		cout << name << "   --   " << description << endl;

		int i = 1;
		for each (MenuComponent* var in menuItems)
		{
			cout << i++ << ". ";
			var->print();
		}
	};
};
