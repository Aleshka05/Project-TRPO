#include<iostream>
#include"modul.h"

using namespace std;

void main() {

	int choice = 0;
	cout << "�������� ���������: \n";
	cout << "1. ���� ������ �����\n";
	cout << "2. ������� ����� �� 10 ������� ��������� � ������\n";
	cout << "3. ������� �����������\n";
	cout << "4. ����������\n";
	cout << "5. ����� �� ���������\n";
	do {
		switch (choice)
		{

		case 1: {
			game();

			break;
		}
		case 2: {
			number_system();

			break;
		}
		case 3: {
			calc();

			break;
		}
		case 4: {
			timetable();

			break;
		}
		default:
			break;
		}
	} while (choice != 5);
}
