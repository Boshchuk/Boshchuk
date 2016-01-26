#include "stdafx.h"
#include "Item.h"
#include <iostream>

Item::Item( int type, std::string title)
{
	_type = type;
	_title = title;
}

Item::Item(int id, int type, std::string title, double price)
{
	_id = id;
	_type = type;
	_title = title;
	_price = price;
}

void Item::PrintToConole() const
{
	std::cout << "Type: " << _type << " Title: " << _title << std::endl;
}
