// ITMO.CPlusPlus.Test8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Time
{
    friend Time operator+(const Time&, const double);
    friend Time operator+(const double, const Time&);
private:
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
        
        if (hours < 0 or minutes < 0 or seconds < 0)
            throw ExNegNumber("Ошибка!!!");
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
    Time operator+(const Time& t) const
    {
        Time summ;
        int addSec = TimeSec() + t.TimeSec();
        summ.hours = addSec / 3600;
        summ.minutes = (addSec % 3600) / 60;
        summ.seconds = addSec % 60;
        return summ;
    }
    Time operator-(const Time& t) const
    {
        Time summ;
        int addSec = TimeSec() - t.TimeSec();
        summ.hours = addSec / 3600;
        summ.minutes = (addSec % 3600) / 60;
        summ.seconds = addSec % 60;
        return summ;
    }
    bool operator<(const Time& t) const
    {
        int timeInSec1 = TimeSec();
        int timeInSec2 = t.TimeSec();
        if (timeInSec1 < timeInSec2)
            return true;
        return false;
    }
    bool operator>(const Time& t) const
    {
        int timeInSec1 = TimeSec();
        int timeInSec2 = t.TimeSec();
        if (timeInSec1 > timeInSec2)
            return true;
        return false;
    }
    class ExNegNumber
    {
    public:
        string names;
        ExNegNumber(string name) : names(name)
        {

        }
    };
};
     Time operator+(const Time& t1, const double t2)
      {
          Time summ;
          int addSec = t1.TimeSec() + static_cast<int>(t2 * 3600);
          summ.hours = addSec / 3600;
          summ.minutes = (addSec % 3600) / 60;
          summ.seconds = addSec % 60;
          return summ;
      }
      Time operator+(const double t1, const Time& t2)
      {
          return t1 + t2;
      }
    class ExNotNum
    {
    private:
        string message;
    public:
        ExNotNum() : message("Ошибка!!! Введен символ.")
        {

        }
        void printMessage() const
        {
            cout << message << endl;
        }

    };


    int main()
    {
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        int h, m, s;
        try
        {
            if (!(cin >> h >> m >> s))
                throw ExNotNum();

            Time t1(h, m, s);
            Time t2(2, 20, 10);
            Time summ = t1 + t2;
            Time minus = t1 - t2;
            Time timePlusNum = t1 + 2;
            Time numPlus = 3 + t2;
            cout << t1.Times() << endl;
            cout << t2.Times() << endl;
            cout << summ.Times() << endl;
            cout << minus.Times() << endl;
            cout << timePlusNum.Times() << endl;
            cout << numPlus.Times() << endl;
            if (t1 < t2) cout << "True" << endl;
            else cout << "False" << endl;
            if (t1 > t2) cout << "True" << endl;
            else cout << "False" << endl;
        }
        catch (Time::ExNegNumber& ex)
        {
            cout << ex.names;
        }
        catch (ExNotNum& ex)
        {
            ex.printMessage();
        }
    }

