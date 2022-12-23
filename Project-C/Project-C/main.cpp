#include<iostream>
#include"modul.h"

using namespace std;

int main() {

	setlocale(0, "");
	int choice = 0;

	do {
		cout << "Выберите программу: \n";
		cout << "1. Игра угадай число\n";
		cout << "2. Простой калькулятор\n";
		cout << "3. Расписание\n";
		cout << "4. Выйти из программы\n";
		cin >> choice;

		switch (choice)
		{

		case 1: {
			game();

			break;
		}
		case 2: {
			calc();

			break;
		}
		case 3: {
			timetable();

			break;
		}
		default:
			break;
		}
	} while (choice != 4);
}
