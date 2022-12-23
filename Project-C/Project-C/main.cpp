#include<iostream>
#include"modul.h"

using namespace std;

void main() {

	int choice = 0;
	cout << "Выберите программу: \n";
	cout << "1. Игра угадай число\n";
	cout << "2. Перевод чисел из 10 системы счисления в другую\n";
	cout << "3. Простой калькулятор\n";
	cout << "4. Расписание\n";
	cout << "5. Выйти из программы\n";
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
