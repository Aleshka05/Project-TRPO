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
			system_numser();

			break;
		}
		case 3: {
			calculator();

			break;
		}
		case 4: {
			schedule();

			break;
		}
		default:
			break;
		}
	} while (choice != 5);
}
