#pragma once
#include "Header.h"
#include "Menu.h"
#include "MenuItem.h"
class DinnerMenu : public Menu {
public:
	DinnerMenu(string name, string description) {
		this->name = name;
		this->description = description;
		add(new MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", 2.99, true));
		add(new MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", 2.99, false));
		add(new MenuItem("Soup of the day", "Soup of the day, with a side of potato salad", 3.29, true));
		add(new MenuItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", 3.05, false));
		add(new MenuItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", 3.99, true));
		add(new MenuItem("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread", 3.89, true));
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
