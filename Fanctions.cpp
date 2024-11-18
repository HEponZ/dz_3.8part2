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
			return true;
		}
	}
	return false;
}

bool operator<(const Flat& over1, const Flat& over2)
{
	// проверка на равность площадей
	if (over1 == over2)
	{
		if (over1.price < over2.price)
		{
			return true;
		}
	}
	return false;
}