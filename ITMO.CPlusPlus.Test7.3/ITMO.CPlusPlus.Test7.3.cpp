// ITMO.CPlusPlus.Test7.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <tuple>
using namespace std;

using Tuple = tuple <double, double, int>;

Tuple Myroot(double x, double y, double z)
{
    double a1 = 0, a2 = 0;
    int flag = -1;
    double Y = y * y - 4 * x * z;
    if (Y > 0)
    {
       a1 = ((-y) + sqrt(Y)) / (2 * x);
       a2 = ((-y) - sqrt(Y)) / (2 * x);
       flag = 1;
    }
    if (Y == 0)
    {
        a1 = (-y) / (2 * x);
        a2 = a1;
        flag = 0;
    }
    return make_tuple(a1, a2, flag);
}

void Test()
{
    Tuple s1 = Myroot(5, 9, 1);
    cout << "a1 = " << get<0>(s1) << " a2 = " << get<1>(s1) << get<2>(s1) << endl;
    Tuple s2 = Myroot(7, 1, 9);
    cout << "a1 = " << get<0>(s2) << " a2 = " << get<1>(s2) << get<2>(s2) << endl;
}
int main()
{
    Test();
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
