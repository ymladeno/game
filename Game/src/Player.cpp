/*
 * Player.cpp
 *
 *  Created on: 11 Nov 2017
 *      Author: osboxes
 */

#include <iostream>
#include "include/Player.hpp"

Player::Player() : _myscore{}, _inventory{} {
}

void Player::addInventory(std::string descriptionOfInventory)
{
	_inventory = new Inventory{descriptionOfInventory};
}

void Player::addItemToInventory(std::string itemDescription)
{
	_inventory->addItem(itemDescription);
}

void Player::writeScore(std::ostream out)
{
	out << _myscore;
}

Player::Score Player::getScore()
{
	return _myscore;
}

void Player::killMonster(size_t which)
{

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

