#include <iostream>
using namespace std;
void max_average(int *p,double *q)
{
	int max = p[0] ;
	double	ave = 0,sum = p[0];
	for (int i=0; i < 9; i++)            //����͡����ֵ
	{
		sum = sum + p[i + 1];
		if (p[i + 1] > p[i])
			max = p[i + 1];
	}
	ave = sum / 10;
	q[0] = max;                           //�����ֵ�����P0
	q[1] = ave;                           //��ƽ���������P1
}
int main()
{
	int a[] = { 20,31,43,78,9,18,23,76,92,52 };
	int *p;
	double *q ;
	p = a;
	q = new double[2];                        //q���ڴ洢���ֵ��ƽ����
	if (q == NULL)
	{
		cout << "���ڴ����ʧ�ܣ�" << endl;
		return 0;
	}
	max_average(p, q);
	cout << "���ֵΪ��" << q[0] << endl << "ƽ��ֵΪ��" << q[1]<<endl;
	delete[]q;
	return 0;
}