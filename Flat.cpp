#include "Flat.h"

Flat& Flat::operator=(const Flat& flat)
{
	// проверка не равны ли уже обьекты
	if (this == &flat)
	{
		return *this;
	}

	// присваивание значений одного обьекта другому
	square = flat.square;
	price = flat.price;

	return *this;
}