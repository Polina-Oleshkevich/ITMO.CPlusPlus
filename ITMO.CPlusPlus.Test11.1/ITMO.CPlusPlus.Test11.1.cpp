// ITMO.CPlusPlus.Test11.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm> //  для алгоритма сортировки  
using namespace std;

class Point
{
private:
	double x;
	double y;
public:
	Point(double x, double y) : x(x), y(y)
	{

	}
	double DistToCenter() const
	{
		return sqrt(x * x + y * y);
	}
	double DistanceTo(const Point& point) const
	{
		return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
	}
	friend ostream& operator<<(ostream&, const Point&);
	friend bool operator<(const Point&, const Point&);
};

ostream& operator<< (ostream& out, const Point& point)
{
	out << "(" << point.x << ", " << point.y << ")" << endl;
	return out;
}
bool operator< (const Point& point1, const Point& point2)
{
	if (point1.DistToCenter() < point2.DistToCenter()) return true;
	return false;
}

int main() 
{
	std::vector<Point> v; 
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8)); 
	std::sort(v.begin(), v.end());
	// требуется перегрузка оператора < для // класса Point
	 for (auto &point : v)
		 std::cout << point << '\n';
		 // требуется перегрузка оператора << для // класса Point 
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
