// ITMO.CPlusPlus.Lab4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void fum_value(double k, double x, double y)
{
    x = x + k;
    y = y + k; 
}
void fum_ptr(double k, double* x, double* y)
{
    *x = *x + k; 
    *y = *y + k;
}
void fum_ref(double k, double& x, double& y)
{
    x = x + k; 
    y = y + k; 
}
void print(double x, double y) 
{ 
    cout << "x = " << x << "; y = " << y << endl; 
}
int main()
{
        double k = 2.5;
        double xv = 10; 
        double yv = 10;
        print(xv, yv);
        fum_value(k, xv, yv); // Передача в функцию обычного параметра  print(xv, yv);  
        fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя  print(xv, yv);  
        fum_ref(k, xv, yv); // Передача в функцию параметра ссылки  print(xv, yv);  
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
