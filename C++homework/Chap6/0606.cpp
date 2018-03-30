#include <iostream>
using namespace std;
void student(int *q,double *s)            //不太明白“首地址”和“第一个元素的首地址”有什么区别
{
	for (int i = 0; i < 3; i++)
		s[i] = (*(q+i*2) + *(q+i*2+1)) / 2.0;  //注意类型
}
void course(int *q, double *c)
{
	for (int j = 0; j < 2; j++)
		c[j] = (*(q+j) + *(q+2+j)+ *(q+4+j)) / 3.0;
}
int main()
{
	int a[3][2] = { { 90,78 },{ 88,80 },{ 79,76 } };
	double *c,*s;                              //c，s分别用来存储课程和学生的平均分
	int *q = &a[0][0];                         //定义指向行的指针
	c = new double[2];
	s = new double[3];
	if (c == NULL||s==NULL )
	{
		cout << "堆内存分配失败！" << endl;
		return 0;
	}
	student(q, s);
	course(q, c);
	for (int i = 0; i < 3; i++)
		cout << "第" << i + 1 << "个学生的平均分为：" << s[i] << endl;
	for (int j = 0; j < 2;j++)
		cout << "第" << j+ 1 << "个课程的平均分为：" << c[j] << endl;
	delete []s;
	delete []c;
	return 0;
}