#include<iostream>
using namespace std;
class Point
{
public:
	Point(){}
	Point(double x,double y)
	{
		m_x=x;m_y=y;
	}
	~Point()
	{
		cout<<"再见！"<<endl;
	}
	void set()
	{
		cout<<"请输入点的x坐标和y坐标：";
		cin>>m_x>>m_y;
	}
	void display()
	{
		cout<<"点的x坐标为："<<m_x<<endl;
		cout<<"点的y坐标为："<<m_y<<endl;
	}
private:
	double m_x,m_y;
};
int main()
{
	Point pointA,pointB(1,1);
	pointA.set();
	pointA.display();
	pointB.display();
	return 0;
}