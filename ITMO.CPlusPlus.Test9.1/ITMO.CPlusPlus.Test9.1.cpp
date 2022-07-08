// ITMO.CPlusPlus.Test9.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>
#include <windows.h>

using namespace std;

class Triangle
{
public:
    Triangle(double a, double b, double c)
    {
        if (c >= a + b or a >= b + c or b >= a + c)
            throw Triangle::ExTriangle("Triangle.");
    }

    double TriangleArea(double a, double b, double c)
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - c));
    }
    class ExTriangle
    {
    public:
        string name;
        ExTriangle(string names) :name(names)
        {

        };
    private:
        double a;
        double b;
        double c;
    };
};
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите стороны треугольника : " << endl;
    double a, b, c;
    cin >> a >> b >> c;
    try
    {
        Triangle tr(a, b, c);
        cout << "Площадь равна : " << tr.TriangleArea(a, b, c) << endl;
    }
    catch (Triangle::ExTriangle& ex)
    {
        cout << "Ошибка!!!" << ex.name;
    }
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
