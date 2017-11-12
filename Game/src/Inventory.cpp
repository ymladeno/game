/*
 * Inventory.cpp
 *
 *  Created on: 11 Nov 2017
 *      Author: osboxes
 */

#include "include/Inventory.hpp"

Inventory::Inventory(std::string name) : _name{name}, _items{nullptr}{};

void Inventory::addItem(std::string name)
{
	delete _items;
	_items = new Item{name};
}

Inventory::~Inventory() {
	delete _items;
}
