// ITMO.CPlusPlus.Test15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <windows.h> 
#include <list>
#include <algorithm> 
#include <map>

using namespace std;

struct StudentGrade
{
    string name;
    char grade;
};
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    map <string, char> mapGrade;
    StudentGrade  st1{ "Sergey ", '5' };
    StudentGrade  st2{ "Aleksey ", '4' };
    mapGrade.insert(pair<string, char>(st1.name, st1.grade));
    mapGrade.insert(pair<string, char>(st2.name, st2.grade));
    map<string, char>::iterator iter;
    iter = mapGrade.begin();
    while (iter != mapGrade.end()) {
        cout << (*iter).first << (*iter).second << endl;
        iter++;
    }
   
    string name;
    cout << "Введите имя студента: " << endl;
    cin >> name;
    for (auto& student : mapGrade)
    {
        if (student.first == name)
        {
            cout << student.first << student.second << endl;
            return 0;
        }
    }
   
    char grade;
    cout << "Ошибка!!!" << endl;
    cout << "Введите оценку: " << endl;
    cin >> grade;
    StudentGrade st{ name, grade };
    mapGrade. insert(pair<string, char>(st.name, st.grade));
    cout << st.name << st.grade << endl;
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
