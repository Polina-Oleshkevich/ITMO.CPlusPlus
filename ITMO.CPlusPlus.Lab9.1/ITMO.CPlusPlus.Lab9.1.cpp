// ITMO.CPlusPlus.Lab9.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>  
using namespace std;

class DivideByZeroError
{
public:
	DivideByZeroError() : message("Деление на нуль") { }
	void printMessage() const { cout << message << endl;} 
private: 
	string message;
};
float quotient(int numl, int num2)
{
	if (num2 == 0) 
		throw DivideByZeroError();
	return  (float)numl / num2; 
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите два целых числа для расчета их частного:\n";
	int number1, number2;
	cin >> number1;
	cin >> number2;
	for (int i = -10; i < 10; i++)
	{
		try
		{
			float result = quotient(number1, i); 
			cout << "Частное равно " << result << endl;
		}
		catch (DivideByZeroError& error)
			{
			cout << "ОШИБКА: ";
			error.printMessage(); 
			}
	}
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
