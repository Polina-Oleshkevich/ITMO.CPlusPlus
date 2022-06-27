// ITMO.CPlusPlus.Lab5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void show_array(const int, const int);
bool from_min(const int, const int);
bool from_max(const int, const int);
void bubble_sort(int, const int, bool (*compare)(int, int));
void show_array(const int Arr[], const int N) 
{
	for (int i = 0; i < N; i++) 
		cout << Arr[i] << "  ";
	cout << "\n";
}
bool from_min(const int a, const int b)
{ 
	return a > b;
}
bool from_max(const int a, const int b)
{ 
	return a < b;
}
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++) 
	{
		for (int j = 0; j < N - 1; j++)
	    {
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);  
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	bool (*from_f[2])(int, int) = { from_min,from_max };
	const int N = 10; 
	int my_choose = 0;
	int A[N] = { 9,8,7,6,1,2,3,5,4,9 }; 
	cout << "1. Сортировать по возрастанию\n"; 
	cout << "2. Сортировать по убыванию\n";
	cin >> my_choose;  
	cout << "Исходные данные: ";
	return 0;
	show_array(A, N);
	bubble_sort(A, N, (from_f[my_choose - 1]));
	 show_array(A, N);
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
