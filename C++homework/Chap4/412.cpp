#include<iostream>
using namespace std;
int main()
{
	const int N = 10;                                                 //������Ԫ�صĸ���ΪN
	int x,i,j,k;                                                      //����i,j,kΪѭ������
	int a[N] = { 23,35,100,145,207 };                                 //��ʼ��
	for ( i = 5; i < N; i++)
	{
		cout << "Please input an integer(press 0 to leave):";
		cin >> a[i];                                                 //����һ����
		if (a[i] == 0)
			break;                                                   //��0�˳�
		else
			for (j = i; a[j]<a[j-1]; j --)
				x = a[j], a[j] = a[j - 1], a[j - 1] = x;             //����
		cout << "{";
		for (k = 0; k < i; k++)
			cout << a[k]<<",";
		cout << "\b}" << endl;
	}
	return 0;
}