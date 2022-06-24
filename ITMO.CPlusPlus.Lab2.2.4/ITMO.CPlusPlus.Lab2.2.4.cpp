// ITMO.CPlusPlus.Lab2.2.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	int k;
	int m;
	int s = 0;
	cout << "¬ведите нижнюю границу интервала: ";
	cin >> k;
	cout << "¬ведите верхнюю границу интервала: ";
	cin >> m;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}
		cout << s << endl;
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
