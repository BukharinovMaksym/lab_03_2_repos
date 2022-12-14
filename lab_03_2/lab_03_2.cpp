// Lab_03_2.cpp
// Бухарінов Максим Сергійович
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	cout << endl;

	// перевірка ділення на нуль
	if ( ((x + 5) < 0 && c == 0) && a == 0 )
		cout << "ERROR: division by zero..." << endl;
	if ( ((x + 5) > 0 && c != 0) && x == 0)
		cout << "ERROR: division by zero..." << endl;
	if ( (!((x + 5) < 0 && c == 0) && !((x + 5) > 0 && c != 0)) && c == 4 )
		cout << "ERROR: division by zero..." << endl;

	// спосіб 1: розгалуження в скороченій формі
	if ( (x + 5) < 0 && c == 0)
		F = 1/(a * x) - b;
	if ((x + 5) > 0 && c != 0)
		F = (x - a) / x;
	if (!((x + 5) < 0 && c == 0) && !((x + 5) > 0 && c != 0))
		F = (10 * x) / (c - 4);

	cout << "1) F = " << F << endl;

	// спосіб 2: розгалуження в повній формі

	if ((x + 5) < 0 && c == 0)
		F = 1 / (a * x) - b;
	else
		if ((x + 5) > 0 && c != 0)
			F = (x - a) / x;
		else
			F = (10 * x) / (c - 4);

	cout << "2) F = " << F << endl;

	cin.get();
	return 0;
}