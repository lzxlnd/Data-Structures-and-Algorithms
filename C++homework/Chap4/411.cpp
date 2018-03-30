#include <iostream>
using namespace std;
int main()
{
	int N = 0,sum = 0;
	cout << "Please input N(N<=100):";
	cin >> N;
	if (N>0&&N <= 100)
	{
		int a[100] = { 1,1 };
		for (int i = 2; i < N; i++)
			a[i] = a[i - 1] + a[i - 2];
		for (int j = 0; j < N; j++)
			sum = a[j] + sum;
		cout << sum << endl;
	}
	else
		cout << "wrong!!" << endl;
	return 0;
}