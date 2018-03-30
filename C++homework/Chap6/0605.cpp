#include <iostream>
using namespace std;
void max_average(int *p,double *q)
{
	int max = p[0] ;
	double	ave = 0,sum = p[0];
	for (int i=0; i < 9; i++)            //计算和、最大值
	{
		sum = sum + p[i + 1];
		if (p[i + 1] > p[i])
			max = p[i + 1];
	}
	ave = sum / 10;
	q[0] = max;                           //将最大值分配给P0
	q[1] = ave;                           //将平均数分配给P1
}
int main()
{
	int a[] = { 20,31,43,78,9,18,23,76,92,52 };
	int *p;
	double *q ;
	p = a;
	q = new double[2];                        //q用于存储最大值和平均数
	if (q == NULL)
	{
		cout << "堆内存分配失败！" << endl;
		return 0;
	}
	max_average(p, q);
	cout << "最大值为：" << q[0] << endl << "平均值为：" << q[1]<<endl;
	delete[]q;
	return 0;
}