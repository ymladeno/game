/*
 * Game.cpp
 *
 *  Created on: 10 Nov 2017
 *      Author: osboxes
 */

#include <iostream>
#include "include/Game.hpp"

Game::Game(const std::string worldName, const std::string inventoryName, const size_t nbPlayers, const size_t nbMonsters) :
		_world{new World{worldName, inventoryName, nbPlayers, nbMonsters}} {
			std::cout << "Start new game !" << std::endl;
		};

void Game::play() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;

	_world->play();
}

void Game::stop() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Game::~Game() {
	delete _world;
}

