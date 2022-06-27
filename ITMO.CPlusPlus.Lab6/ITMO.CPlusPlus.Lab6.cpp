// ITMO.CPlusPlus.Lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double sum = 0; 
    int const n = 100;
    double nums[n];
    for (int i = 0; i < n; i++)
    {
        nums[i] = (rand() % 100);
    }
    ofstream out("test", ios::out | ios::binary);
    if (!out)
    { 
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    out.write((char*)nums, sizeof(nums));
    out.close();
    ifstream in("test", ios::in | ios::binary); 
    if (!in)
    {
        cout << "Файл открыть невозможно"; 
        return 1; 
    }
    int k = sizeof(nums) / sizeof(double);
    for (int i = 0; i < k; i++) { sum = sum + nums[i]; 
    cout << nums[i] << ' ';
    }
    cout << "\nsum = " << sum << endl;
    in.close();
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
