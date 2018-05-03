#include <iostream>,<cstring>
using namespace std;
int A(char a[])
{
	int i;
	for (i=0;;i++)
		if(a[i]==NULL)
			break;
	return i;
}
char *DifStrCat(char a1[],char a2[])          
{
	if (a1 == a2)
		return NULL;
	else
	{
		char *s;
		int m=A(a1),n=A(a2),i;
		s = new char[m+n+1];
		for (i = 0; i < m; i++)
			s[i] = a1[i];
		for (int j = 0; j < n; j++)
			s[i + j] = a2[j];
		s[m+n] = '\0';
		return s;
	}
}
int main()
{
	char s1[] = "teacher", s2[] = "student";
	char *s=DifStrCat(s1, s2);
	cout << s << endl;
	return 0;
}