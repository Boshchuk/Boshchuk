// Lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Item.h"
#include <vector>
#include <iostream>

void PrintList(std::vector<Item> list)
{
	for (auto item = list.begin(); item != list.end(); ++item)
	{
		item->PrintToConole();
	}
}

int main() {
	 
	const int Sepatator = 10;

	std::vector<Item> allItemsList = std::vector<Item>();
	//TODO Add different elements here
	allItemsList.push_back(Item(5, "less 1"));
	allItemsList.push_back(Item(4, "less 2"));
	allItemsList.push_back(Item(3, "less 3"));

	allItemsList.push_back(Item(15, "great 1"));
	allItemsList.push_back(Item(14, "great 2"));
	allItemsList.push_back(Item(13, "great 3"));
	//


	std::vector<Item> lessGroup = std::vector<Item>();
	std::vector<Item> greatGroup = std::vector<Item>();

	for (auto item = allItemsList.begin(); item != allItemsList.end(); ++item)
		{
			if ((*item)._type < Sepatator )
			{
				lessGroup.push_back(*item);
			}
			else
			{
				greatGroup.push_back(*item);
			}
		}

	std::cout << "Less group" << std::endl;

	PrintList(lessGroup);

	std::cout << "Great group" << std::endl;

	PrintList(greatGroup);

	return 0;
}
