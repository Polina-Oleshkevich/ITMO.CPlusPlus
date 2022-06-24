// ITMO.CPlusPlus. Lab3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


long double firBinSearch(double a, int n)
{
	double L = 0;
	double R = a;
	while (R - L > 1e-10)
	{
		double M = (L + R) / 2;
		if (pow(M, n) < a)
		{
			L = M;
		}
		else
		{
			R = M;
		}
	}
	return R;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double R;
	cout << "\n¬ведите R:\n";
	cin >> R;
	int n;
	cout << "\n¬ведите n:\n";
	cin >> n;
	double Rn = firBinSearch(R, n);
	cout << "\nRn = " << firBinSearch << endl;
	cout.precision(6);
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
