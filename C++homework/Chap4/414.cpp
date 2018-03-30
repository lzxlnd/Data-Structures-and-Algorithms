#include<iostream>
using namespace std;
int main()
{
	const int N=4;              //学生数量为N
	struct student              //定义结构体，储存学生信息
	{
		char num[7];
		char name[10];
		int s1,s2,s3;
	}stu[N];
	int a[N];              //用于记录挂科学生信息
	int b=0;                     //记录挂科学生个数  
	for (int i=0;i<N;i++)
	{
		cout<<"请输入第"<<i+1<<"个学生的学号，姓名，和成绩：";
		cin>>stu[i].num>>stu[i].name>>stu[i].s1>>stu[i].s2>>stu[i].s3;
	    if(stu[i].s1<60||stu[i].s2<60||stu[i].s3<60)
			{
				a[b]=i;
				b++;
		    }
	}
	cout<<"共有"<<b<<"个学生不及格，为："<<endl;
	cout<<"学号"<<"\t"<<"姓名"<<endl;
	for(int j=0;j<b;j++)
		cout<<stu[a[j]].num<<"\t"<<stu[a[j]].name<<endl;
	return 0;
}