#include <iostream>
using namespace std;
int main()
{
	int a[]={20,31,43,78,9,18,23,76,92,52};
	int *p=&a[0];
	double average=0,sum=0;
	int max=0;
	for(int i=0;i<=9;i++)
	{
		sum=*(p+i)+sum;
		if(max<*(p+i))
			max=*(p+i);
	}
	average=sum/10;
	cout<<"average="<<average<<",max="<<max<<endl;
	return 0;
}
