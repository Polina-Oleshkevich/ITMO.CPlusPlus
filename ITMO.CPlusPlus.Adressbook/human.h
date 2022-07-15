#pragma once
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class human
{
public:
	human(string lastName, string name)	: 
		lastName(lastName), name(name) {}

	string GetlastName() const
	{
		return lastName;
	}
	string Getname() const
	{
		return name;
	}
	virtual string GetSt() const = 0;

	void Setphone(string phone)
	{
		this->phone = phone;
	}
	string Getphone() const
	{
		return phone;
	}
	void Setaddress(string address)
	{
		this->address = address;
	}
	string Getaddress() const
	{
		return address;
	}
	

	virtual string GetInfo() const
	{
		std::ostringstream full_info;
		full_info << GetlastName() << " " << Getname() << " " << GetSt() << "---" << Getphone() << Getaddress() << " ";
		return full_info.str();
	}
	
	// Запись данных в файл
	virtual void Save() const
	{
		ofstream fout("human.txt", ios::app);
		fout << Getname() << " " << GetlastName() << " " << GetSt() << "---" << Getphone() << " " << Getaddress() << " ";
		fout << endl;
		fout.close();
	}
private:
	string name;
	string lastName;
	string phone = "not";
	string address = "not";

};