#include <iostream>
using namespace std;
void SwapCharPointer(char *&t1, char*&t2)
{
	char *s1 = t1, *s2 = t2;
	t1 = s2;
	t2 = s1;
}
int main()
{
	char *s1 = "teacher", *s2 = "student";
	SwapCharPointer(s1, s2);
	cout << s1 << "\t" << s2 << endl;
	return 0;
}