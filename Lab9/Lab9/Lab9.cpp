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
	int Sepatator;
	std::cout << "Input separator: ";
	std::cin >> Sepatator;

	

	int typeIn;


	auto allItemsList = std::vector<Item>();
	//TODO Add different elements here

	std::cout << "Input type (title predifined): ";
	std::cin >> typeIn;

	allItemsList.push_back(Item(typeIn, "less 1"));

	std::cout << "Input type (title predifined): ";
	std::cin >> typeIn;
	allItemsList.push_back(Item(typeIn, "less 2"));

	std::cout << "Input type (title predifined): ";
	std::cin >> typeIn;
	allItemsList.push_back(Item(typeIn, "less 3"));

	std::cout << "Input type (title predifined): ";
	std::cin >> typeIn;
	allItemsList.push_back(Item(typeIn, "great 1"));

	std::cout << "Input type (title predifined): ";
	std::cin >> typeIn;
	allItemsList.push_back(Item(typeIn, "great 2"));

	std::cout << "Input type (title predifined): ";
	std::cin >> typeIn;
	allItemsList.push_back(Item(typeIn, "great 3"));
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
	system("pause");

	return 0;
}
