#include <iostream>
using namespace std;
int main()
{
	int n,x=1,y=0;
	cout << "Please input n:";
	cin >> n;
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			x = 1;
			for (int j = 1; j <= i; j++)
				x = x*j;
			y = y + x;
		}
		cout << "1!+2!+...+n!=" << y << endl;
	}
	else
		cout << "!n<=0!"<<endl;
	return 0;
}