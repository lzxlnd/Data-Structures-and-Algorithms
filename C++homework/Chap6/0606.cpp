#include <iostream>
using namespace std;
void student(int *q,double *s)            //��̫���ס��׵�ַ���͡���һ��Ԫ�ص��׵�ַ����ʲô����
{
	for (int i = 0; i < 3; i++)
		s[i] = (*(q+i*2) + *(q+i*2+1)) / 2.0;  //ע������
}
void course(int *q, double *c)
{
	for (int j = 0; j < 2; j++)
		c[j] = (*(q+j) + *(q+2+j)+ *(q+4+j)) / 3.0;
}
int main()
{
	int a[3][2] = { { 90,78 },{ 88,80 },{ 79,76 } };
	double *c,*s;                              //c��s�ֱ������洢�γ̺�ѧ����ƽ����
	int *q = &a[0][0];                         //����ָ���е�ָ��
	c = new double[2];
	s = new double[3];
	if (c == NULL||s==NULL )
	{
		cout << "���ڴ����ʧ�ܣ�" << endl;
		return 0;
	}
	student(q, s);
	course(q, c);
	for (int i = 0; i < 3; i++)
		cout << "��" << i + 1 << "��ѧ����ƽ����Ϊ��" << s[i] << endl;
	for (int j = 0; j < 2;j++)
		cout << "��" << j+ 1 << "���γ̵�ƽ����Ϊ��" << c[j] << endl;
	delete []s;
	delete []c;
	return 0;
}