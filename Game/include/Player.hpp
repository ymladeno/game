/*
 * Player.hpp
 *
 *  Created on: 11 Nov 2017
 *      Author: osboxes
 */

#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include <string>
#include "include/Inventory.hpp"

class Player {

public:
	class Score
	{
	private:
		size_t _score;
	public:
		Score() : _score{0}{};
		friend std::ostream &operator<<(std::ostream &out, Score &score) {
			out << score._score;
			return out;
		}
	};

private:
	Score _myscore;
	Inventory *_inventory;

public:
	Player();
	void addInventory(std::string descriptionOfInventory);
	void addItemToInventory(std::string itemDescription);
	void writeScore(std::ostream out);
	Score getScore();
	void killMonster(size_t which);
	virtual ~Player();
};

#endif /* PLAYER_HPP_ */
