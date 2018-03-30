#include<iostream>
using namespace std;
int main()
{
	double x,v;
	v=60000.0/3600.0;
	x=v*0.5+v*v/5/2;
	cout<<"汽车还要行驶"<<x<<"米才停下来"<<endl;
    return 0;
}