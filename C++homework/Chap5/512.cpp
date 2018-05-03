#include<iostream>
using namespace std;
int J(int a)                  //定义阶乘
{
	int x=1;
	if(a>0)
		for(int i=1;i<=a;i++)
		x=i*x;
	return x;
}
int C(int a,int b)          //定义C
{
	int c;
	c=J(a)/J(b)/J(a-b);
	return c;
}
int main()
{
	int n,a=0,b=0;                     //a=等式左边，b=等式右边
	cout<<"Please input n:";
	cin>>n;
	for(int j=0;j<=n;j++)
		b=b+C(n,j)*C(n,j);
	a=C(2*n,n);
	cout<<a<<b<<endl;
	if(a==b)
		cout<<"Right!"<<endl;
	else
		cout<<"wrong"<<endl;
	return 0;
}