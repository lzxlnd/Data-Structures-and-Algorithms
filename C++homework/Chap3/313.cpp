#include<iostream>
using namespace std;
int main()
{
	double x=0, y=1.1;
    while (x - y < -0.000001||x - y > 0.000001)
	{
		x = y;
		y = x - (5 * x*x*x - 3 * x*x + 2 * x - 8) / (15 * x*x - 6 * x + 2);
	}
	cout<< y;
	return 0;
}