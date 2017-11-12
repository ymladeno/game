/*
 * Inventory.hpp
 *
 *  Created on: 11 Nov 2017
 *      Author: osboxes
 */

#ifndef INVENTORY_HPP_
#define INVENTORY_HPP_

#include <string>
#include "include/Item.hpp"

class Inventory {
private:
	std::string _name;
	Item *_items;

public:
	Inventory(std::string name);
	void addItem(std::string name);
	virtual ~Inventory();
};

#endif /* INVENTORY_HPP_ */
