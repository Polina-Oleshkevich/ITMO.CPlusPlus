// ITMO.CPlusPlus.Lab5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	int min = 0; // дл€ записи минимального значени€ 
	int buf = 0; // дл€ обмена значени€ми 
	for (int i = 0; i < N; i++)
	{
		min = i; // номер текущей €чейки, как €чейки с минимальным значением
				 // в цикле найдем реальный номер €чейки с минимальным значением 
		for (int j = i + 1; j < N; j++) 
			min = ( a[j] < a[min] ) ? j : min;
		// перестановка этого элемента, помен€в его местами с текущим
		if (i != min)
		{      
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
	    }   
    }
	for (int i : a)
		cout << i << '\t';
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
