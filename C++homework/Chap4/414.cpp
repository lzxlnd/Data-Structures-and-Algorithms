#include<iostream>
using namespace std;
int main()
{
	const int N=4;              //ѧ������ΪN
	struct student              //����ṹ�壬����ѧ����Ϣ
	{
		char num[7];
		char name[10];
		int s1,s2,s3;
	}stu[N];
	int a[N];              //���ڼ�¼�ҿ�ѧ����Ϣ
	int b=0;                     //��¼�ҿ�ѧ������  
	for (int i=0;i<N;i++)
	{
		cout<<"�������"<<i+1<<"��ѧ����ѧ�ţ��������ͳɼ���";
		cin>>stu[i].num>>stu[i].name>>stu[i].s1>>stu[i].s2>>stu[i].s3;
	    if(stu[i].s1<60||stu[i].s2<60||stu[i].s3<60)
			{
				a[b]=i;
				b++;
		    }
	}
	cout<<"����"<<b<<"��ѧ��������Ϊ��"<<endl;
	cout<<"ѧ��"<<"\t"<<"����"<<endl;
	for(int j=0;j<b;j++)
		cout<<stu[a[j]].num<<"\t"<<stu[a[j]].name<<endl;
	return 0;
}