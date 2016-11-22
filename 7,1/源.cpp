#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[200],i,m,t,j;
	scanf_s("%d", &m);
	for (i = 0; i < m; i++)
		a[i] = i + 1;
	for (t=2;t<i+1;t++)
	{
		for (j = t; j < i + 1; j++)
			if (a[j] % t == 0)
				a[j] = 1;
	}
	for (t = 0; t <= i; t++)
		if (a[t] != 1)
			printf("%d\n", a[t]);
	system("pause");
	return 0;
}