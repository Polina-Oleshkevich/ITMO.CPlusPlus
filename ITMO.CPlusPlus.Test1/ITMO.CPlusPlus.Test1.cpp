// ITMO.CPlusPlus.Test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double s;
	double x1;
	double x2;
	double x3;
	double x4;
	double x5;
	double y1;
	double y2;
	double y3;
	double y4;
	double y5;
	cout << "\n¬ведите x1 , x2 , x3 , x4, x5 :\n";
	cout << "\n¬ведите y1 , y2 , y3 , y4, y5 :\n";
	cout.precision(2);
	cin >> x1;
	cin >> x2;
	cin >> x3;
	cin >> x4;
	cin >> x5;
	cin >> y1;
	cin >> y2;
	cin >> y3;
	cin >> y4;
	cin >> y5;
	s = fabs(x1 * y2 + x2 * y3 + x3 * y4 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5) / 2;
	cout << "\ns = " << s << endl;
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
