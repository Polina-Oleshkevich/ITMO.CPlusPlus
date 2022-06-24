// ITMO.CPlusPlus. Lab2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	string name;
	double x, y;
	cout << "\n¬ведите x , y:\n";
	cin >> x;
	cin >> y;
	if (x * x + y * y < 9 && y > 0)
		cout << "\nвнутри" << endl;
	else if (x * x + y * y > 9 || y < 0)
		cout << "\nснаружи" << endl;
	else
		cout << "\nна границе" << endl;
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
