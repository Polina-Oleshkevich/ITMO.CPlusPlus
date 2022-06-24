// ITMO.CPlusPlus.Lab3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int addNumders(int n)
{
    if (n == 1) return 1; // выход из рекурсии
    else return (n + addNumders(n - 1));
}
int addNumders(int n, int m)
{
    if (n == 0) return m;
    return (n + addNumders(n + 1));
}
int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите положительное число: ";
    cin >> n;
    cout << "Сумма чисел от 1 до введенного числа: " << addNumders(n) << endl;
    int m;
    cout << "Введите два числа: ";
    cin >> n >> m;
    cout << "Сумма чисел от первого введенного до второго введенного числа: " << addNumders(n, m) << endl;
    cout << "Введите числа: ";
    cin >> n >> m;
    cout << "Наибольший общий делитель: " << gcd(m, n) << endl;
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
