#include<iostream>
using namespace std;
int main()
{
	const double PI=3.14;
	double r,h,S,V;
	cout<<"Please input the radius"<<endl;
	cin>>r;	
	cout<<"Please input the height"<<endl;
	cin>>h;
	S=PI*r*r*2+2*PI*r*h;
	V=r*r*h*PI;
	cout<<"The area is:"<<S<<endl<<"The volume is:"<<V<<endl;
	return 0;
}