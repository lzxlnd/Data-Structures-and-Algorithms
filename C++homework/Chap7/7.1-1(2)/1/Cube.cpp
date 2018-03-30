#include "Cube.h"
#include<iostream>
using namespace std;
int Cube::numOfObject = 0;
Cube::Cube()
{
	m_x = 1;
	numOfObject++;
}
Cube::Cube(double d)
{
	m_x = d;
	numOfObject++;
}

Cube::~Cube()
{
}

void Cube::set(double x)
{
	m_x = x;
}

double Cube::getArea()
{
	return m_x*m_x*m_x;
}

void Cube::displayNumOfObject()
{
	cout<<"立方体个数为："<<numOfObject<<endl;
}
