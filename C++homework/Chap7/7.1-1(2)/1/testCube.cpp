#include"Cube.h"
#include<iostream>
using namespace std;
void main()
{
	Cube c1;
	Cube c2;
	int a, b;
	cout << "������������߳���";
	cin >> a >> b;
	c1.set(a);
	c2.set(b);
	cout << c1.getArea() << endl <<c2.getArea() <<endl;
	Cube::displayNumOfObject();
}