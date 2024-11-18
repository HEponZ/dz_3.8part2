#pragma once
#pragma once
#include <iostream>

using namespace std;

class Flat
{
private:
	int square;
	int price;
public:
	Flat() : Flat(0, 0) {};
	Flat(int square_S, int price_S) : square{ square_S }, price{ price_S } {};

	// аксессоры
	int get_square() const
	{
		return  square;
	}
	int get_price() const
	{
		return price;
	}

	// модификаторы
	void set_square(int square_S)
	{
		square = square_S;
	}
	void set_price(const int price_S)
	{
		price = price_S;
	}

	Flat& operator=(const Flat& overcoat);

	friend bool operator==(const Flat& over1, const Flat& over2);
	friend bool operator>(const Flat& over1, const Flat& over2);
	friend bool operator<(const Flat& over1, const Flat& over2);
};