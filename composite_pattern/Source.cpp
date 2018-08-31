#include "Header.h"
#include "DinnerMenu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"
#include "Menu.h"
#include <vld.h>

void main()
{
	DinnerMenu* dinnerMenu = new DinnerMenu("Dinner Menu", "Dinner Menu");
	PancakeHouseMenu* pancakeHouseMenu = new PancakeHouseMenu("Pancake Menu", "Pancake Menu");

	MenuComponent* allMenus = new Menu("ALL MENUS", "All menus combined");
	allMenus->add(dinnerMenu);
	allMenus->add(pancakeHouseMenu);
	Waitress* waitress = new Waitress(allMenus);
	waitress->printMenu();

	delete dinnerMenu;
	delete pancakeHouseMenu;
	delete allMenus;
	delete waitress;
}