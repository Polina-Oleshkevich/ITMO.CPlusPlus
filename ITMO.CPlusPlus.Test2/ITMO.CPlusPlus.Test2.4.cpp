// ITMO.CPlusPlus.Test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    double x, y;
    int count = 0;
    int a = 13, b = 7, c = 3, d = 0;
    do
    {
        cout << "Введите значение x, y : ";
        cin >> x >> y;

        if ((x * x + y * y) < 4)
        {
            count = count + a;
        }
        else if ((x * x + y * y) > 4 && ((x * x + y * y) < 9))
        {
            count = count + b;
        }
        else if ((x * x + y * y) > 9 && ((x * x + y * y) < 20))
        {
            count = count + c;
        }
        else
        {
            count = count + d;
        }
        cout << "Очков: " << count << "\n";
    }
    while (count < 20);
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
