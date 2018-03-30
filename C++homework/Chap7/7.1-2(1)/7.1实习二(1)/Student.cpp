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
	grade = c;                                  //为什么不用s.
}

void display(Student&s)
{
	cout << "学生的学号为：" << s.num << endl 
		<< "学生的姓名为：" << s.name << endl
		<< "学生的总评成绩为：" << s.grade << endl;
}


