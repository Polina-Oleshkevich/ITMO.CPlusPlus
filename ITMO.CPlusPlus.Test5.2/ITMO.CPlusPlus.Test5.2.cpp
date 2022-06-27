// ITMO.CPlusPlus.Test5.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int* max_vect(int length, int* a, int* b)
{
    int* max = new int[length];
    for (int i = 0; i < length; i++)
    {
        max[i] = (a[i] > b[i]) ? a[i] : b[i];
    }
    return max;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]);         //Количество элементов массива
    int *c;                                //Указатель на результирующий массив
    c = max_vect(kc,a,b);             //вызов функции для создания массива  
    for (int i = 0; i < kc; i++)            //Вывод результата.
        cout << c[i] << " "; 
        cout << endl; 
        delete []c; 
        //Возврат памяти.
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
