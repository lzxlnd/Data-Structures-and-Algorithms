#include <iostream>
using namespace std;
int main()
{
	double x,f;
	cout << "Please input x (x<=2): ";
	cin >> x;
	if (x <= 2)
	{
		if (x > 1)
			f = x + 2.5;
		if (x <= 1 && x > -1)
			f = 4.35*x;
		if (x <= -1)
			f = x;
		cout << f << endl;
	}
	else
		cout << "!x>2!" << endl;
	return 0;
}