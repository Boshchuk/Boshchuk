#pragma once
#include <string>

class Item
{
public:
	int _id;
	int _type;
	std::string _title;
	double _price;




public:
	Item( int type, std::string title);
	Item(int id, int type, std::string title, double price);

public:
	void PrintToConole() const;
};
