#include<iostream>
using namespace std;
int A(int n);
int main()
{
	int n;
	cout << "Please input n:";
	cin >> n;
	cout << A(n)<<endl;
	return 0;
}
int A(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return 2 * A(n - 1) + 3 * A(n - 2);
}