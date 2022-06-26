#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double areaOne(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    
double lengthOne(double xb, double yb, double xc, double yc)
{
    double distX = xb - xc;
    double distY = yb - yc;
    double dist = sqrt(distX * distX + distY * distY);
    return dist;
}
double pentagonArea()
{
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
    cout << "Введите координаты x1, y1, x2, y2, x3, y3, x, y4, x5, y5: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;

    double AB = lengthOne(x1, y1, x2, y2);
    double AC = lengthOne(x1, y1, x3, y3);
    double AD = lengthOne(x1, y1, x4, y4);
    double AE = lengthOne(x1, y1, x5, y5);
    double BC = lengthOne(x2, y2, x3, y3);
    double CD = lengthOne(x3, y3, x4, y4);
    double DE = lengthOne(x4, y4, x5, y5);

    double ABC = areaOne(AB, BC, AC);
    double ACD = areaOne(AC, CD, AD);
    double ADE = areaOne(AD, DE, AE);

    double totalArea = ABC + ACD + ADE;
    return totalArea;
}

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    cout << "Площадь многоугольника: " << pentagonArea() << endl;
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