#include "Flat.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Flat flat1, flat2;
	int choise, num;

	enum MENU {
		EXIT = 0,
		FILL,
		COMPARE,
		ASSIGN,
		COMPARE_PRICE,
		PRINT
	};

	cout << "1 - Ввести информацию о квартире\n2 - Сравнить площади\n3 - Присвоить\n4 - Сравнить цены одной площади\n5 - Вывод\n0 - EXIT\n";

	do
	{
		cin >> choise;
		switch (choise)
		{
		case FILL:
			cin.ignore();
			cout << "Введите площадь квартиры №1: ";
			cin >> num;
			flat1.set_square(num);
			cout << "Введите цену квартиры №1: ";
			cin >> num;
			flat1.set_price(num);

			cin.ignore();
			cout << "Введите площадь кваритры №2: ";
			cin >> num;
			flat2.set_square(num);
			cout << "Введите цену квартиры №2: ";
			cin >> num;
			flat2.set_price(num);
			break;
		case COMPARE:
			if (flat1 == flat2)
			{
				cout << "Площади квартир равны\n";
			}
			else
			{
				cout << "Площади квартир не равны\n";
			}
			break;
		case ASSIGN:
			flat1 = flat2;
			break;
		case COMPARE_PRICE:
			if (flat1 > flat2)
			{
				cout << "Цена квартиры 1 больше, чем цена 2\n";
			}
			else if (flat1 < flat2)
			{
				cout << "Цена квартиры 2 больше, чем цена 1\n";
			}
			else
			{
				cout << "Цены равны или типы разные\n";
			}
			break;
		case PRINT:
			printf("Площадь №1 - %dm^3\nЦена - %d$\nПлощадь №2 - %dm^3\nЦена - %d$\n", flat1.get_square(), flat1.get_price(), flat2.get_square(), flat2.get_price());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}