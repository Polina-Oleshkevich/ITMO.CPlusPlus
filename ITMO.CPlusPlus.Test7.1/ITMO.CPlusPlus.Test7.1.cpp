// ITMO.CPlusPlus.Test7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;
struct Time
{
    int hours, minutes, seconds;
   
    void InputTime()
        {
        cout << "\n¬ведите  врем€ в формате часы, минуты, секунды: ";
        cin >> hours >> minutes >> seconds;
        }
    void ShowTime()
    {
        cout << hours << minutes << seconds << endl;
    }
    int TimeSec()
    {
        return hours * 3600 + minutes * 60 + seconds;
    }
   void AddTime(Time t)
    {
       int addSec = TimeSec() + t.TimeSec();
        hours = addSec / 3600;
        minutes = (addSec % 3600) / 60;
        seconds = addSec % 60;
    }
    void SubtractTime(Time t)
    {
        int subSec = abs(TimeSec() - t.TimeSec());
        hours = subSec / 3600;
        minutes = (subSec % 3600) / 60;
        seconds = subSec % 60;
    }
};
void Test()
{
    setlocale(LC_ALL, "Russian");
    Time t1;
    Time t2 = { 1, 6, 25 };
    t1.InputTime();
    t1.ShowTime();
    t2.ShowTime();
    cout << t1.TimeSec() << endl;
    t1.AddTime(t2);
    t1.ShowTime();
    t1.SubtractTime(t2);
    t1.ShowTime();
 
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
