// ITMO.CPlusPlus.Test10.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>
#include <windows.h>
#include "Dot.h"

using namespace std;

class Triangle
{

public:
    Triangle(Dot* a, Dot* b) : a{ a }, b{ b }
    {
        c00 = Dot(); //композиция
        ab = a->distanceTo(*b);
        bc = b->distanceTo(c00);
        ac = a->distanceTo(c00);
        if (IsNotTr(ab, bc, ac))
            throw Triangle::ExNotTr("Triangle.");
    }

    Triangle(Dot* a, Dot* b, Dot* c) : a{ a }, b{ b }, c{ c }
    {
        ab = a->distanceTo(*b); //агрегация
        bc = b->distanceTo(*c);
        ac = a->distanceTo(*c);
        if (IsNotTr(ab, bc, ac))
            throw Triangle::ExNotTr("Triangle.");
    }

    double get_ab()
    {
        return ab;
    }
    double get_bc()
    {
        return bc;
    }
    double get_ac()
    {
        return ac;
    }

    boolean IsNotTr(double ab, double bc, double ac)
    {
        if (ac >= ab + bc or ab >= bc + ac or ab >= ab + ac)
            return true;
        return false;
    }
    double TrianglePer()
    {
        return ab + bc + ac;
    }

    double TriangleAr()
    {
        double p = TrianglePer() / 2;
        return sqrt(p * (p - ab) * (p - bc) * (p - ac));
    }
    class ExNotTr
    {
    public:
        string name;
        ExNotTr(string names) :name(names)
        {

        }
    };
private:
    Dot* a;
    Dot* b;
    Dot* c;
    Dot c00;
    double ab;
    double bc;
    double ac;
};
   
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите стороны треугольника : " << endl;
    double ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    Dot a(ax, ay);
    Dot b(bx, by);
    Dot c(cx, cy);
    try
    {
        Triangle tr(&a, &b);
        cout << "AB : " << tr.get_ab() << " BC : " << tr.get_bc() << " AC : " << tr.get_ac() << endl;
        cout << "Периметр треугольника : " << tr.TrianglePer() << endl;
        cout << "Площадь треугольника : " << tr.TriangleAr() << endl;

        Triangle triangle(&a, &b, &c);
        cout << "AB : " << triangle.get_ab() << " BC : " << triangle.get_bc() << " AC : " << triangle.get_ac() << endl;
        cout << "Периметр треугольника : " << triangle.TrianglePer() << endl;
        cout << "Площадь треугольника : " << triangle.TriangleAr() << endl;
    }
    catch (Triangle::ExNotTr& ex)
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
