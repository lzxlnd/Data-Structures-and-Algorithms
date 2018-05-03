#include<iostream>
using namespace std;
double nm(int n,int m)
{
	double a=1;
	for(int i=0;i<m;i++)
		a=a*n;
	return 1/a;
}
int main()
{
	int m,n;
	cout<<"Please input m, n:";
	cin>>m>>n;
	double b=0;
	for(int j=1;j<=n;j++)
		b=b+nm(j,m);
	cout<<endl<<b<<endl;
	return 0;
}