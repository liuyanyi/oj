#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,in,m;
	for (i = 0; i < 9; i++)
		scanf_s("%d", &a[i]);
	scanf_s("%d", &in);
	for (i = 0; i < 9; i++)
	{
		if (a[i] > in)
		{
			for (m = 9; m >= i; m--)
				a[m + 1] = a[m];
			a[i] = in;
			break;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	system("pause");
}