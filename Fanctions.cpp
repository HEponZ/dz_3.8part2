#include "Flat.h"

bool operator==(const Flat& over1, const Flat& over2)
{
	// сравнение площадей обьектов
	if (over1.square == over2.square)
	{
		return 1;
	}
	return 0;
}

bool operator>(const Flat& over1, const Flat& over2)
{
	// проверка на равность площадей
	if (over1 == over2)
	{
		if (over1.price > over2.price)
		{
			cout << "Цена квартиры 1 больше, чем цена 2\n";
			return 1;
		}
		else if (over2.price > over1.price)
		{
			cout << "Цена квартиры 2 больше, чем цена 1\n";
			return 1;
		}
		else
		{
			cout << "Цены равны\n";
			return 1;
		}
	}
	cout << "Площади не равны\n";
	return 0;
}