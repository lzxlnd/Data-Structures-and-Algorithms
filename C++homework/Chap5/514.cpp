#include<iostream>
using namespace std;
int A(int n);
int main()
{
	int n;
	cout << "Please input n:";
	cin >> n;
	if (n=1)
		cout<<A(1)<<endl;
	else
	    cout << A(n)-A(n-1)<<endl;
	return 0;
}
int A(int n)
{
	if (n == 1 || n == 2||n==3)
		return 1;
	else
		return  A(n - 1) + A(n - 3);
}