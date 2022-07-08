#pragma once
class Header
{
private:
	double x;
	double y;
public:
	Header();
	Header(double x, double y);
	double dist(Header point);
};
