#include "std.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите 2 целых числа" << endl;
	cin >> a >> b;
	cout << "—умма" << a + b << endl;
	_getch();
	return 0;
}
