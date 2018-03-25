//FuntionTemplate.h
#ifndef FUNCTIONTEMPLATE
#define FUNCTIONTEMPLATE
template<typename T>
void Sort(T a[], int num)
{
	int i, j, temp;
	int flag = 1;
	for (i = 0; i < num - 1 && flag == 1; i++)
	{
		flag = 0;
		for (j = 0; j < num - i - 1; j++)
		{
			if (a[j + 1] < a[j])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
				flag = 1;
			}
		}
	}
}
#endif

