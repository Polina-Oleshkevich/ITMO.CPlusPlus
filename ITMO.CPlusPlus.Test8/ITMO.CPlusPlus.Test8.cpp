// ITMO.CPlusPlus.Test8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;
public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int hours, int minutes, int seconds)
    {
        int h = hours + (minutes + seconds / 60) / 60;
        int m = (minutes + seconds / 60) / 60;
        int s = seconds / 60;
    }
    void ShowTime(int hours, int minutes, int seconds)
    {
        this->hours;
        this->minutes;
        this->seconds;
    }
    string Times() const
    {
        string t;
        t.append(to_string(hours / 10));
        t.append(to_string(hours % 10));
        t.append(":");
        t.append(to_string(minutes / 10));
        t.append(to_string(minutes % 10));
        t.append(":");
        t.append(to_string(seconds / 10));
        t.append(to_string(seconds % 10));
        return t;
    }
    int TimeSec() const
        {
        return hours * 3600 + minutes * 60 + seconds;
        }
    Time AddTime(const Time &t) const
        {
        Time summ;
        int addSec = TimeSec() + t.TimeSec();
        summ.hours = addSec / 3600;
        summ.minutes = (addSec % 3600) / 60;
        summ.seconds = addSec % 60;
        return summ;
        }
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Time t1(5, 70, 77);
    Time t2(2, 20, 10);
    Time add;
    add = t1.AddTime(t2);
    cout << t1.Times() << endl;
    cout << t2.Times() << endl;
    cout << add.Times() << endl;
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
