#include <iostream>
using namespace std;
int main()
{
	char a[20],b[20];
	int j=0,c=0;
	char *p=a;
	cout<<"ÇëÊäÈëÒ»´®×Ö·û£º";
	cin>>p;
	for (int i=0;i<20;i++)
	{
		if(p[i]<123&&p[i]>96)
			{
				b[j]=p[i];
				j++;
		}
	}
	b[j]='\0';
	cout<<b<<endl;
	return 0;
}