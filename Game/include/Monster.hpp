/*
 * Monster.hpp
 *
 *  Created on: 11 Nov 2017
 *      Author: osboxes
 */

#ifndef MONSTER_HPP_
#define MONSTER_HPP_

#include <stddef.h>

class Monster {
private:

public:
	Monster();
	void removePlayer(size_t who);
	size_t getPlayers();
	virtual ~Monster();
};

#endif /* MONSTER_HPP_ */
