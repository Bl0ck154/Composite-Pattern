#pragma once
#include "MenuComponent.h"
class Waitress {
	MenuComponent* allMenus;
public:
	Waitress(MenuComponent* allMenus) {
		this->allMenus = allMenus;
	}
	void printMenu() {
		allMenus->print();
	}
};