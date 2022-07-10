// ITMO.CPlusPlus.Lab13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h> 
using namespace std; 

class Item {
private: 
	string title; 
	double price;
public: 
	virtual void getdata()
	{
		cout << "\n������� ��������� : ";
		cin >> title; 
		cout << "������� ���� : ";
	  cin >> price; 
	} 
	virtual void putdata()
	{
		cout << "\n���������: " << title; 
		cout << "\n����:" << price;
	}
};
class Paperbook : public Item 
{
private: 
int pages;
public: 
	void getdata()
	{
		Item::getdata(); 
		cout << "������� ����� ������� : "; 
		cin >> pages;
	} 
	void putdata() 
	{
		Item::putdata(); 
		cout << "\n�������:" << pages;
	}
};
class AudioBook : public Item
{
	private:
		double time;
		public: 
	void getdata()
	{
		Item::getdata();
		cout << "������� ����� �������� : "; 
		cin >> time; 
    }
	   void putdata()
	   {
		   Item::putdata();  
	   cout << "\n����� �������� : " << time; 
	   }
};
int main()
{
	SetConsoleOutputCP(1251);    
	Item* pubarr[100];
	int n = 0; 
	char choice; 
	do
	{ 
		cout << "\n������� ������ ��� ����� ��� ��������� �����(b / a) ? ";  
		cin >> choice; 
		if (choice == 'b') 
			pubarr[n] = new Paperbook; 
		else   
			pubarr[n] = new AudioBook; 
		pubarr[n++]->getdata(); 
		cout << "����������((� / n) ? "; 
		cin >> choice; 
	} while (choice == 'y'); 
	
	for (int j = 0; j < n; j++)  
		//���� �� ���� �������� 
		pubarr[j]->putdata();   
	//������� ������ � ����������  cout << endl;  
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
