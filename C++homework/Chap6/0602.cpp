#include <iostream>
using namespace std;
int main()
{
	int a[3][2]={{90,78},{88,80},{79,76}};
	int (*p)[2];
	int *q=&a[0][0];                         //����ָ���е�ָ��
	double stu[3],course[2];
	p=a;
	for(int i=0;i<3;i++)
	{
		stu[i]=(p[i][0]+p[i][1])/2;
		cout<<"ѧ��"<<i+1<<"��ƽ���ɼ���"<<stu[i]<<endl;
	}
	for(int j=0;j<2;j++)
	{
		course[j]=(*(q+j)+*(q+j+2)+*(q+j+4))/3;
		cout<<"�γ�"<<j+1<<"��ƽ���֣�"<<course[j]<<endl;
	}
	return 0;
}
