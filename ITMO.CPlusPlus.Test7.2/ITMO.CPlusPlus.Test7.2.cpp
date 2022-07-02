// ITMO.CPlusPlus.Test7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct MyStruct
{
    double a1 = 0, a2 = 0;
};

MyStruct Myroot(double x, double y, double z)
{
    MyStruct roots;
    double Y = y * y - 4 * x * z;
    if (Y > 0)
    {
        roots.a1 = ((-y) + sqrt(Y)) / (2 * x);
        roots.a2 = ((-y) - sqrt(Y)) / (2 * x);
    }
    if (Y == 0)
    {
        roots.a1 = (-y) / (2 * x);
        roots.a2 = roots.a1;
    }
    return roots;
}

void Test()
{
    MyStruct s1 = Myroot(5, 9, 1);
    cout << "a1 = " << s1.a1 << " a2 = " << s1.a2 << endl;
    MyStruct s2 = Myroot(7, 1, 9);
    cout << "a1 = " << s2.a1 << " a2 = " << s2.a2 << endl;
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
