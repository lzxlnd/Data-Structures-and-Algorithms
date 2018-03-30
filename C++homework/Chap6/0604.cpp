#include <iostream>
using namespace std;
int main()
{
	int*p;
	int n;
	cout<<"请输入元素数量n：";
	cin>>n;
	p=new int[n];
	if(p==NULL)
	{
		cout<<"堆内存分配失败！";
		return 0;
	}
	for(int i=0;i<n;i++)
		{
			cout<<"请输入第"<<i+1<<"个元素：";
			cin>>p[i];
	}
	for(int j=1;j<=n;j++)
		cout<<p[n-j]<<"\t";
	delete []p;
	return 0;
}