#include "声明.h"
#include<iostream>
using namespace std;
Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(double a, double b)
{
	x = a;
	y = b;
}

void Point::printPoint()
{
	cout << "(" << x << "," << y << ")" << endl;
}

Circle::Circle()
{
	cen = Point(0, 0);
	r = 1;
}

Circle::Circle(Point a, double b)
{
	cen = a;
	r = b;
}

void Circle::printCircle()
{
	cout << "圆心为：";
	cen.printPoint();
	cout << "半径为：" << r << endl;
}
