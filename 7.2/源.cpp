#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,m,tmp;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
		for (m = i+1; m < 10; m++)
		{
			if (a[i] > a[m])
			{
				tmp = a[i];
				a[i] = a[m];
				a[m] = tmp;
			}
		}
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	system("pause");
	return 0;
}