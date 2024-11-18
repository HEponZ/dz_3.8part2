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

	cout << "1 - ������ ���������� � ��������\n2 - �������� �������\n3 - ���������\n4 - �������� ���� ����� �������\n5 - �����\n0 - EXIT\n";

	do
	{
		cin >> choise;
		switch (choise)
		{
		case FILL:
			cin.ignore();
			cout << "������� ������� �������� �1: ";
			cin >> num;
			flat1.set_square(num);
			cout << "������� ���� �������� �1: ";
			cin >> num;
			flat1.set_price(num);

			cin.ignore();
			cout << "������� ������� �������� �2: ";
			cin >> num;
			flat2.set_square(num);
			cout << "������� ���� �������� �2: ";
			cin >> num;
			flat2.set_price(num);
			break;
		case COMPARE:
			if (flat1 == flat2)
			{
				cout << "������� ������� �����\n";
			}
			else
			{
				cout << "������� ������� �� �����\n";
			}
			break;
		case ASSIGN:
			flat1 = flat2;
			break;
		case COMPARE_PRICE:
			if (flat1 > flat2)
			{
				cout << "���� �������� 1 ������, ��� ���� 2\n";
			}
			else if (flat1 < flat2)
			{
				cout << "���� �������� 2 ������, ��� ���� 1\n";
			}
			else
			{
				cout << "���� ����� ��� ���� ������\n";
			}
			break;
		case PRINT:
			printf("������� �1 - %dm^3\n���� - %d$\n������� �2 - %dm^3\n���� - %d$\n", flat1.get_square(), flat1.get_price(), flat2.get_square(), flat2.get_price());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}