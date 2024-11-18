#include "Flat.h"

Flat& Flat::operator=(const Flat& flat)
{
	// �������� �� ����� �� ��� �������
	if (this == &flat)
	{
		return *this;
	}

	// ������������ �������� ������ ������� �������
	square = flat.square;
	price = flat.price;

	return *this;
}