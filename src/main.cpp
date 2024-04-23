// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "1251");

	int a = 0, b = 0;

	cout << "Введите x: "; cin >> a;
	cout << "Введите n: "; cin >> b;

	cout << power(a, b);

	return 0;
}
