#include<iostream>
using namespace std;
int main()
{
	const int N = 10;                                                 //数组中元素的个数为N
	int x,i,j,k;                                                      //定义i,j,k为循环变量
	int a[N] = { 23,35,100,145,207 };                                 //初始化
	for ( i = 5; i < N; i++)
	{
		cout << "Please input an integer(press 0 to leave):";
		cin >> a[i];                                                 //输入一个数
		if (a[i] == 0)
			break;                                                   //按0退出
		else
			for (j = i; a[j]<a[j-1]; j --)
				x = a[j], a[j] = a[j - 1], a[j - 1] = x;             //排序
		cout << "{";
		for (k = 0; k < i; k++)
			cout << a[k]<<",";
		cout << "\b}" << endl;
	}
	return 0;
}