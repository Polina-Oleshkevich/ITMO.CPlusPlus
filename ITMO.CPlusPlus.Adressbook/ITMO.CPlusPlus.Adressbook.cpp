
#include <iostream>
#include <string> 
#include <windows.h>
#include "human.h"
#include "teacher.h"
#include "student.h"
#include <fstream>

using namespace std;

void Info(human* human)
{
	string phone, address;
	human->Setphone(phone);
	human->Setaddress(address);
}

void ShowInfo(human* human)
{
	cout << human->get_full_name() << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    course* course[5];
	course[0] = new course("Python");
	course[1] = new course("C++");
	course[2] = new course("C#");
    human* human[20];
		cout << "¬ведите ‘амилию: ";
		cin >> lastName;
		cout << "¬ведите »м€: ";
		cin >> name;
		cout << "¬ведите номер телефона: ";
		cin >> phone;
		cout << "¬ведите адрес: ";
		cin >> address;

}
	