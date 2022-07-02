// ITMO.CPlusPlus.Test7.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <windows.h> 
#include <string>
#include <tuple> 
#include <vector> 

using namespace std; 

using Tuple = tuple<string, int, double>;
void printTupleOfThree(Tuple t)
{ 
    cout << "(" << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << ")" << endl;
}
Tuple funtup(string s, int a, double d) 
{
    s.append("!"); 
    return make_tuple(s, a, d * 10); 
}
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
   
    vector<string> v1{ "one", "two", "three", "four", "five", "six" }; 
    vector<int> v2 = { 1, 2, 3, 4, 5, 6 };  
    vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
    std::tuple;
    auto t0 = make_tuple(v1[0], v2[0], v3[0]);
    printTupleOfThree(t0);
    auto t1 = funtup(v1[1], v2[1], v3[1]);
    printTupleOfThree(t1);
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
