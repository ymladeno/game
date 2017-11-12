/*
 * Item.hpp
 *
 *  Created on: 12 Nov 2017
 *      Author: osboxes
 */

#ifndef ITEM_HPP_
#define ITEM_HPP_

#include <string>

class Item {
private:
	std::string _name;

public:
	Item(std::string name);
	virtual ~Item();
};

#endif /* ITEM_HPP_ */
