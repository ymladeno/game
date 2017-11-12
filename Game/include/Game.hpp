/*
 * Game.hpp
 *
 *  Created on: 10 Nov 2017
 *      Author: osboxes
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include <string>
#include "include/World.hpp"

class Game {
private:
	World *_world;

public:
	Game() = delete;
	Game(const std::string worldName, const std::string inventory, const size_t nbPlayers, const size_t nbMonsters);
	World *getWorld();
	void changeWorld(const std::string newWorldName, const size_t nbPlayers, const size_t nbMonsters);
	void play();
	void stop();
	//std::string getWorldName();
	virtual ~Game();
};

#endif /* GAME_HPP_ */
