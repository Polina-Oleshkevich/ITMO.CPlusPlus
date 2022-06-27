// ITMO.CPlusPlus.Test5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int Sum(int* mas, int n)
{ 
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mas[i];
    }
    return sum;
}

double Mean(int* mas, int n)
{ 
    int s = Sum(mas, n);
    return  (double) s / n;
}

int sumNeg(int* mas, int n)
{ 
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
            sum += mas[i];
    }
    return sum;
}

int sumPlus(int* mas, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        if (mas[i] > 0)
            sum += mas[i];
    }
    return sum;
}

int sumOne(int* mas, int n) 
{
    int sum = 0;
    for (int i = 1; i < n; i += 2)
    {
        sum += mas[i];
    }
    return sum;
}

int sumTwo(int* mas, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i += 2) 
    {
        sum += mas[i];
    }
    return sum;
}

int Min(int* mas, int n)
{
    int min = mas[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
            index = i;
        }
    }
    return index;
}

int Max(int* mas, int n) 
{ 
    int max = mas[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            index = i;
        }
    }
    return index;
}
void Multy(int* mas, int n)
{
    int mult = 1;
    int indexMin = Min(mas, n);
    int indexMax = Max(mas, n);
    if (indexMin < indexMax)
    {
        for (int i = indexMin; i <= indexMax; i++)
        {
            mult *= mas[i];
        }
        cout << mult << endl;
    }
    else if (indexMin > indexMax)
    {
        for (int i = indexMax; i <= indexMin; i++)
        {
            mult *= mas[i];
        }
        cout << mult << endl;
    }
    else
       cout << "!!!" << endl;
}

void sortArray(int* mas, int n)
{
    int min = 0;
    int buf = 0;
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

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << '\t';
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
       cout << "mas[" << i << "]=";
       cin >> mas[i];
    }

    cout << "Сумма элементов массива: " << Sum(mas, n) << endl;
    cout << "Среднее значение элементов массива: " << Mean(mas, n) << endl;
    cout << "Сумма отрицательных элементов массива: " << sumNeg(mas, n) << endl;
    cout << "Сумма положиетльных элементов массива: " << sumPlus(mas, n) << endl;
    cout << "Сумма элементов массива с нечетными индексами: " << sumOne(mas, n) << endl;
    cout << "Сумма элементов массива с четными индексами: " << sumTwo(mas, n) << endl;
    cout << "Индекс минимального элемента: " << Min(mas, n) << endl;
    cout << "Индекс максимального элемента: " << Max(mas, n) << endl;
    Multy(mas, n);
    const int N = 10;
    int A[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    cout << "Сортировка массива по возрастанию:" << endl;
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
