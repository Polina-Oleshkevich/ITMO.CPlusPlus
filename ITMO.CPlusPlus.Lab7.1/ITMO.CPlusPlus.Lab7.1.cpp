// ITMO.CPlusPlus.Lab7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;  
struct Distance
{
    int feet;
    double inches;
    void ShowDist()
    {
        cout << feet << "\'-" << inches << "\"\n";
    }
};

Distance AddDist(const Distance& d1, const Distance& d2)
{ 
    Distance d;
    d.feet = d1.feet + d2.feet; 
    d.inches = d1.inches + d2.inches; 
if (d.inches >= 12.0)
{
    d.inches -= 12.0;  
    d.feet++; 
} 
return d;
}
Distance InputDist()
{
    Distance d;
    cout << "\n¬ведите число футов: ";  
cin >> d.feet;
cout << "¬ведите число дюймов: ";
cin >> d.inches;
return d; 
}
void ShowDist(Distance d)
{
    cout << d.feet << "\'-" << d.inches << "\"\n";
}
int main()
{
    setlocale(LC_ALL, "Russian");
    Distance d1 = InputDist();
    Distance d2 = { 1, 6.25 }; 
    Distance d3 = AddDist(d1, d2);
    d1.ShowDist();
    d2.ShowDist();
    d3.ShowDist();
    int n;
    cout << "¬ведите размер массива рассто€ний ";
    cin >> n;
    Distance* masDist = new Distance[n];
    for (int i = 0; i < n; i++)
    {
        masDist[i] = InputDist(); 
    }
    for (int i = 0; i < n; i++)
    { 
        ShowDist(masDist[i]);
    }
    delete[] masDist;
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
