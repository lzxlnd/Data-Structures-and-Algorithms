#include<iostream>
using namespace std;
int main()
{
	const int N = 10;                      //�ַ�����󳤶�ΪN
	int i=N-1,j=0;                         //����ѭ������
	char a[N] = { 0 };                     //��ʼ��Ϊ���ַ�
	cout << "�������ַ�����";
	cin >> a;
	while (a[i] == 0)                      //���������ַ�������
		i--;
	while (a[j] == a[i - j ]&&j<i)        //�Ƚ�      
		j++;
	if (j >= i)
		cout << "�ǻ���" << endl;
	else
		cout << "���ǻ���" << endl;
	return 0;
}