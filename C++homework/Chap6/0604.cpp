#include <iostream>
using namespace std;
int main()
{
	int*p;
	int n;
	cout<<"������Ԫ������n��";
	cin>>n;
	p=new int[n];
	if(p==NULL)
	{
		cout<<"���ڴ����ʧ�ܣ�";
		return 0;
	}
	for(int i=0;i<n;i++)
		{
			cout<<"�������"<<i+1<<"��Ԫ�أ�";
			cin>>p[i];
	}
	for(int j=1;j<=n;j++)
		cout<<p[n-j]<<"\t";
	delete []p;
	return 0;
}