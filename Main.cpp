#include "std.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

//��������� �������� �������
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� 2 ����� �����" << endl;
	cin >> a >> b;
	cout << "����� " << a + b << endl;
	cout << "�������� ���� ����� = " << a - b << endl;
	cout << "������������ ���� ����� = " << a * b << endl;
	cout << "������� ���� ����� = " << a / b << endl;
	_getch();
	return 0;
}
