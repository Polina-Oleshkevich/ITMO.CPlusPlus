#include <iostream>
#include <string> 
#include <windows.h>
#include <fstream>
#include "human.h"
#include "teacher.h"
#include "student.h"

using namespace std;

void Info(human* human)
{

	string phone, address;
	char choice;
	cout << "������ ���.����������((y / n) ? " << endl;
	cin >> choice;
	if (choice == 'y') {
		cout << "������� �������: ";
		cin >> phone;
		cout << "������� �����: ";
		cin >> address;
		human->Setphone(phone);
		human->Setaddress(address);
	}
	else {
		cout << "������ ������� �� �����!" << endl;
	}
}

void ShowInfo(const human* human) {
	cout << human->GetInfo() << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	course* courses[5];
	courses[0] = new course("Python");
	courses[1] = new course("C++");
	courses[2] = new course("C#");
	human* human[20];
	int n = 0;
	char choice;
	do
	{
		cout << "\n������ �������� ��� �������������� (s / t) ? ";
		cin >> choice;
		if (choice == 's')
		{
		string lastName, name;
		cout << "������� ������� ��������: ";
		cin >> lastName;
		cout << "������� ��� ��������: ";
		cin >> name;
		std::vector<int> scores;
		unsigned int count_grade, grade;
		cout << "������� ���������� ������: ";
		cin >> count_grade;
		cout << "������� ������: ";
		for (int i = 0; i < count_grade; i++)
		{
			cin >> grade;
			scores.push_back(grade);
		}
		human[n] = new student(lastName, name, scores);
		Info(human[n]);
		human[n]->Save();
	}
	else
	{
	string lastName, name;
	cout << "������� ������� �������������: ";
	cin >> lastName;
	cout << "������� ��� �������������: ";
	cin >> name;
	unsigned int count_course;
	cout << "������� ID ����� (1 - Python, 2 - C++, 3 - C#): ";
	cin >> count_course;
	human[n] = new teacher(lastName, name, courses[count_course - 1]);
	Info(human[n]);
	human[n]->Save();
	}
	cout << "����������((y / n) ? ";
	cin >> choice;
	n++;
}
 while (choice == 'y');

for (int j = 0; j < n; j++)
	ShowInfo(human[j]);
for (int j = 0; j < n; j++)
	delete human[j];
return 0;
}
	