#include <iostream>

using namespace std;

int timetable() {
	setlocale(LC_CTYPE, "Russian");
	cout << "\x1b[1;36m ���������� ������� ��� 1-2  2 ���������" << endl;

	int x;
	char probel;
	probel = ' ';

	while (true) {

		cout << endl << "\x1b[1;36m �������� ���� ������ 1-�����������, 2-�������, 3-�����, 4-�������, 5-�������, 6-�������, 7-�����������." << endl;

		cin >> x;

		switch (x)
		{
		case 1: {
			cout << "\x1b[1;34m 14:40-16:00 |  \x1b[1;35m ������������ ����� ��������(������)" << endl;
			cout << "\x1b[1;34m 16:30-17:50 |  \x1b[1;35m ���������� �������� � ��������" << endl;
			cout << "\x1b[1;34m 18:05-19:25 |  \x1b[1;35m ���������� ����� ����������������(���. ���.)" << endl;
			cout << "\x1b[1;34m 19:40-21:00 |  \x1b[1;35m ������������ ����� ��������(���. ���.)" << endl;
			break;
		}
		case 2: {
			cout << "\x1b[1;34m 16:30-17:50 |  \x1b[1;35m �������������� ������(��)" << endl;
			cout << "\x1b[1;34m 18:05-19:25 |  \x1b[1;35m ���������� ���������� ����������� �����������(������)" << endl;
			break;
		}
		case 3: {
			cout << "\x1b[1;34m 14:40-16:00 |  \x1b[1;35m �������������� ������(��)" << endl;
			cout << "\x1b[1;34m 16:30-17:50 |  \x1b[1;35m ����������� ����" << endl;
			cout << "\x1b[1;34m 18:05-19:25 |  \x1b[1;35m �������� ������� � ������������� ���������(������)" << endl;
			break;
		}
		case 4: {
			cout << "\x1b[1;34m 14:40-16:00 |  \x1b[1;35m ������ �������������� � ����������������(������)" << endl;
			cout << "\x1b[1;34m 16:30-17:50 |  \x1b[1;35m ���������� �������� � ��������" << endl;
			cout << "\x1b[1;34m 18:05-19:25 |  \x1b[1;35m ���������� ����� ����������������(������)" << endl;
			break;
		}
		case 5: {
			cout << "\x1b[1;34m 14:40-16:00 |  \x1b[1;35m ����������-���������� ������ �������������� ������(������)" << endl;
			cout << "\x1b[1;34m 16:30-17:50 |  \x1b[1;35m �������� �������(��)" << endl;
			cout << "\x1b[1;34m 18:05-19:25 |  \x1b[1;35m ���������� ���������� ������������ �����������(���. ���.)" << endl;
			cout << "\x1b[1;34m 19:40-21:00 |  \x1b[1;35m ������������ ����� ��������(���. ���.)" << endl;
			break;
		}
		case 6: {
			cout << "\x1b[1;34m 14:40-16:00 |  \x1b[1;35m �������������� ������(������)" << endl;
			break;
		}
		case 7: {
			cout << "\x1b[1;34m00:00-23:59 | \x1b[1;35m ����������� � ��������������� " << endl;
			break;
		}
		default:
			cout << "��-��-��, ������ ��� ���... \x1b[0m";
			return 0;
		}
	}
}