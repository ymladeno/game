//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "include/Game.hpp"
#include "include/Inventory.hpp"

int main() {
	//addWorld(name of the world, name of the inventory, nb of players, nb of monsters)
	Game *game1 = new Game{"Earth", "backpack", 2, 3};
	game1->play();
	game1->stop();
	delete game1;

	Game *game2 = new Game{"Mars", "gun", 5, 15};
	game2->play();
	game2->stop();
	delete game2;

	return 0;
}
