#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(char a[],char b[])
{
	for (int i=0; i < 10; i++)
	{
		num[i] = a[i];
		name[i] = b[i];
	}
}

void Student::operator=(double c)
{
	Student s(char a[],char b[] );
	grade = c;                                  //Ϊʲô����s.
}

void display(Student&s)
{
	cout << "ѧ����ѧ��Ϊ��" << s.num << endl 
		<< "ѧ��������Ϊ��" << s.name << endl
		<< "ѧ���������ɼ�Ϊ��" << s.grade << endl;
}


