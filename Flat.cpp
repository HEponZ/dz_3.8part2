#include "Flat.h"

Flat& Flat::operator=(const Flat& flat)
{
	// проверка не равны ли уже обьекты
	if (this == &flat)
	{
		return *this;
	}

	// присваивание значений одного обьекта другому
	this->set_square(flat.get_square());
	this->set_price(flat.get_price());

	return *this;
}