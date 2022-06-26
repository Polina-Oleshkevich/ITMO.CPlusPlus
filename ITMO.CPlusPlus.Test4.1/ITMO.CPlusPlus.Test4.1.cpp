// ITMO.CPlusPlus.Test4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int Myroot(double x, double y, double z, double& a1, double& a2)
{
    double Y = y * y - 4 * x * z;
    if (Y > 0)
    {
        a1 = ((-y) + sqrt(Y)) / (2 * x);
        a2 = ((-y) - sqrt(Y)) / (2 * x);
        return 1;
    }
    if (Y == 0)
    {
        a1 = (-y) / (2 * x);
        a2 = a1;
        return 0;
    }
    return -1;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, z, a1 = 0, a2 = 0;
    cout << "¬ведите коэффициенты x, y, z: " << endl;
    cin >> x >> y >> z;

    switch (Myroot(x, y, z, a1, a2))
    {
    case(1):
        cout << " вадратное уравнение имеет два корн€ " << endl;
        cout << a1 << endl;
        cout << a2 << endl;
        break;

    case(0):
        cout << " вадратное уравнение имеет один корень " << endl;
        cout << a1 << endl;
        break;
    case(-1):
        cout << " вадратное уравнение не имеет корней " << endl;
        break;
    default:
        cout << "ќшибка! ";
            break;
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
