

#include <iostream>
#include"10.1(1).h"
using namespace std;

int main()
{
	
	int a[6] = {3,5,2,3,6,1};
	Sort(a, 6);
	for (int i = 0; i < 5; i++) {
		cout << a[i] << "\t";
	}
	return 0;
}
