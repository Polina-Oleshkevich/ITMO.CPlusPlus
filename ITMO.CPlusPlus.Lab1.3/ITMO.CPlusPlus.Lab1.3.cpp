// ITMO.CPlusPlus.Lab1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	double s, p;
	double a, b, c;
	cout << "\n������� a , b, c:\n";
	cin >> a;
	cin >> b;
	cin >> c;
	p = (a + b + c) / 2;
	s = _CMATH_ (p * (p - a) * (p - b) * (p - c));
	cout << "\ns = " << s << endl;
	cout.precision(2);
	cout << "!\n";
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
