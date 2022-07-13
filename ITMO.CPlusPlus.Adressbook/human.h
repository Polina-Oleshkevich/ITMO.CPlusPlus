#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

class human
{
public:
	human(string lastName, string name, string phone, string address) 
	{
		this->lastName = lastName;
		this->name = name;
		this->phone = phone;
		this->address = address;
	}
	string GetlastName()
	{
		return lastName;
	}
	string Getname()
	{
		return name;
	}
	void Setphone(string phone)
	{
		this->phone = phone;
	}
	string Getphone()
	{
		return phone;
	}
	void Setaddress(string address)
	{
		this->address = address;
	}
	string Getaddress()
	{
		return address;
	}

	string get_full_name()
	{
		ostringstream full_name;
		full_name << this->lastName << " " << this->name << " " << this->phone << " " << this->address << " ";
		return full_name.str();
	}
	
	// Запись данных в файл
	void Save()
	{
		ofstream fout("human.txt", ios::app);
		fout << Getname() << " " << GetlastName() << " " << Getphone() << " " << Getaddress() << " ";
		fout << endl;
		fout.close();
	}
private:
	string name;
	string lastName;
	string phone = " ";
	string address = " ";

};