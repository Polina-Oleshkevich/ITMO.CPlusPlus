// ITMO.CPlusPlusTest6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void sortArray(int* mas, int n) 
{
    int min = 0;
    int buf = 0;

    ofstream outArray("sortArray");   
    if (!outArray)
    {
        cout << "Файл открыть невозможно\n";
        return;
    }
    outArray << "Исходный массив:\n";
    for (int i = 0; i < n; i++)
    {
        outArray << mas[i] << " ";
    }
    outArray.close();

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }

    ofstream outSortArray("sortArray", ios::app);
    if (!outSortArray) {
        cout << "Файл открыть невозможно\n";
        return;
    }
    outSortArray << "\nОтсортированный массив:\n";
    for (int i = 0; i < n; i++)
    {
        outSortArray << mas[i] << " ";
    }
    outSortArray.close();
    cout << "Данные записаны в файл." << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 10;
    int A[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    cout << "Сортировка массива по возрастанию." << endl;
    sortArray(A, N);
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
