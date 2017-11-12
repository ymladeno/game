/*
 * World.cpp
 *
 *  Created on: 11 Nov 2017
 *      Author: osboxes
 */

#include <iostream>
#include "include/World.hpp"

World::World(std::string name, std::string inventoryName, size_t nbPlayers, size_t nbMonsters)
	: _name{name}, _players{new Player[nbPlayers]}, _monsters{new Monster[nbMonsters]}, _nbPlayers{nbPlayers}, _nbMonsters{nbMonsters} {
		std::cout << "World is " << _name << std::endl
		          << "Players are " << nbPlayers << std::endl
		          << "Monsters are " << nbMonsters << std::endl
				  << "Inventory is " << inventoryName << std::endl;

		for(size_t i=0; i<nbPlayers; ++i)
		{
			_players[i].addInventory(inventoryName);
		}
	};

void World::play() {
	_players[0].addItemToInventory("breakfast");
	_monsters[1].removePlayer(2);
	_players[0].killMonster(5);
}

void World::getAllPlayers() {

}

World::~World() {
	delete[] _players;
	delete[] _monsters;
}

