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
		cout<<"�ټ���"<<endl;
	}
	void set()
	{
		cout<<"��������x�����y���꣺";
		cin>>m_x>>m_y;
	}
	void display()
	{
		cout<<"���x����Ϊ��"<<m_x<<endl;
		cout<<"���y����Ϊ��"<<m_y<<endl;
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