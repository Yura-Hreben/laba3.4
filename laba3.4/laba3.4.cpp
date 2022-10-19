// Lab_03_4.cpp
// < Гребень Юрій >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 5
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if ((((y >= 0 && x <= 0) && y <= sqrt(2 * R * R)) || (0 <= y && 0 <= x && y <= sqrt(2 * R * R))) || (y >= 0 && 0 <= x && y <= sqrt(R*R - x*x)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}