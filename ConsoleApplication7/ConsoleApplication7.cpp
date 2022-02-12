#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b)
{
	if (a > b) return a;
	return b;
}

template <class P>
P Min(P a, P b)
{
	if (a < b) return a;
	return b;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	int i1, i2, maxInt, minInt;

	cout << "Введите int:" << ::endl;
	cout << "i1 = ";
	cin >> i1;
	cout << "i2 = ";
	cin >> i2;

	maxInt = Max(i1, i2);
	minInt = Min(i1, i2);

	cout << "Максимальное значение = " << maxInt << endl;
	cout << "Минимальное значение = " << minInt << endl;

	// 
	float f1, f2, maxFloat, minFloat;

	cout << "Введите floats:" << ::endl;
	cout << "f1 = ";
	cin >> f1;
	cout << "f2 = ";
	cin >> f2;

	maxFloat = Max(f1, f2);
	minFloat = Min(f1, f2);

	cout << "Максимальное значение = " << maxFloat << endl;
	cout << "Минимальное значение = " << minFloat << endl;
	system("pause");
}