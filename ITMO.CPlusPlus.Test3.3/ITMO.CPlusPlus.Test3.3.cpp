// ITMO.CPlusPlus.Test3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double areaOne(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
double areaOne(double a)
{
    double s = (a * a * sqrt(3)) / 4;
    return s;
}

void triangleSel()
{
    setlocale(LC_ALL, "Russian");
    string selection;
    cout << "Площадь какого треугольника хотите рассчитать (A/B)? " << endl;
    cin >> selection;

    if (selection == "A")
    {
        double a;
        cout << "Введите стороны: " << endl;
        cin >> a;
        cout << "Площадь треугольника равностороннего:  " << areaOne(a) << endl;
    }
    else if (selection == "B")
    {
        double a, b, c;
        cout << "Введите стороны: " << endl;
        cin >> a >> b >> c;
        cout << "Площадь треугольника разностороннего:  " << areaOne(a, b, c) << endl;
    }
    else
        cout << "Не вариант!" << endl;
}

int main()
{
    triangleSel();
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
