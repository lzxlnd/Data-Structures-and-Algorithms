#include<iostream>
using namespace std;
int main()
{
	const int N = 10;                      //字符串最大长度为N
	int i=N-1,j=0;                         //定义循环变量
	char a[N] = { 0 };                     //初始化为空字符
	cout << "请输入字符串：";
	cin >> a;
	while (a[i] == 0)                      //计数输入字符串长度
		i--;
	while (a[j] == a[i - j ]&&j<i)        //比较      
		j++;
	if (j >= i)
		cout << "是回文" << endl;
	else
		cout << "不是回文" << endl;
	return 0;
}