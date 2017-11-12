/*
 * World.h
 *
 *  Created on: 11 Nov 2017
 *      Author: osboxes
 */

#ifndef WORLD_H_
#define WORLD_H_

#include <list>
#include "include/PlayerManager.hpp"
#include "include/Player.hpp"
#include "include/Monster.hpp"
#include "include/Inventory.hpp"

class World : public PlayerManager {
private:
	std::string _name;
	Player *_players;
	Monster *_monsters;
	size_t _nbPlayers;
	size_t _nbMonsters;

public:
	World(std::string name, std::string inventoryName, size_t nbPlayers, size_t nbMonsters);
	void getAllPlayers();
	void removePlayer();
	void play();
	virtual ~World();
};

#endif /* WORLD_H_ */
