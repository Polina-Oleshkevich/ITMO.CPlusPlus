// ITMO.CPlusPlus.Test 4.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool Input(int& a, int& b)
{
    setlocale(LC_ALL, "Russian");
    int aa, bb;
    if (!(cin >> aa) or !(cin >> bb) or (aa < 0) or (bb < 0))
        return false;
    a = aa;
    b = bb;
    return true;
}
int main()
{
   int a, b;
   if (Input(a, b) == false) // if(!Input(a,b))
   { 
       cerr << "error";
       return 1; 
   }   
   int s = a + b; 
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
