#include <iostream>
using namespace std;


void game() {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int number = rand() % 2000 + 1, countOfHelp = 6,
		enterNumber, countTry = 3, help, n;
	bool active = false;

	cout << "������������, � ������� ����� �� 1 �� 2000, ���������� �������� ���!\n";

	while (true) {

		cout << "\n�������� ����� ����:\n";
		cout << "1) �������� �����!(� ��� " << countTry << " �������)\n";
		cout << "2) ���������(" << countOfHelp << ")\n";
		cout << "3) �������!\n";
		cin >> n;

		switch (n) {

		case 1:

			countTry--;
			cout << "������� �����, �������, �� ��� ������, �������� ���������� �����������: ";
			cin >> enterNumber;

			if (enterNumber == number) {
				cout << "���������� �� ������� �����!";
				active = true;
			}
			else
				cout << "��� �� �� �����! �������� ������!\n";

			break;

		case 2:

			if (countOfHelp == 0) {
				cout << "� ��� ��� ���������!\n";

				break;
			}

			countOfHelp--;

			cout << "��������, ������ ���� ��������� ��� �����:\n";
			cout << "1) ��� ����� �������� ��\n";
			cout << "2) ��� ����� ������ �����\n";
			cout << "3) ��� ����� ������ �����\n";
			cout << "4) ������ ��������\n";
			cout << "5) ������ ����� ������� �������, ���� �� ����\n";
			cin >> help;

			switch (help) {

			case 1:

				int number2;
				cout << "������� �����, �� �������, �� �������, �������� ���������� �����: ";
				cin >> number2;

				if (number % number2 == 0)
					cout << "��� ����� �������� �� " << number2 << endl;
				else
					cout << "���, ��� �� �������� �� " << number2 << endl;
				break;

			case 2:

				int number3;
				cout << "������� ����� � � �����, ������ �� ��� �����������! ";
				cin >> number3;

				if (number3 > number)
					cout << number3 << " ������ �����������!\n";
				else
					cout << number3 << " �� ������ ����������� �����\n";
				break;

			case 3:

				int number4;
				cout << "������� ����� � � �����, ������ �� ��� �����������!";
				cin >> number4;

				if (number4 < number)
					cout << number4 << " ������ �����������!\n";
				else
					cout << number4 << " �� ������ ����������� �����\n";
				break;

			case 4:

				if (number < 50)
					cout << "��� ����� �� 0 �� " << number + rand() % 50 + 50;
				else
					cout << "��� ����� �� " << number - rand() % 50 - 20;
					cout << " �� " << number + rand() % 50 + 20 << endl;
				break;

			case 5:

				if (number >= 10)
					cout << "����� ������� ������� - ��� " << (number / 10) % 10 << endl;
				else
					cout << "����� ������ 10" << endl;
				break;

			}
			break;

		case 3:

			cout << "�� �������! ���������� ����� ���� " << number << endl;
			active = true;
			break;

		default:

			break;
		}

		if (countTry == 0) {
			active = true;
			cout << "Game Over! ����� ���� " << number << endl;
		}

		if (active) {
			break;
		}
	}
}