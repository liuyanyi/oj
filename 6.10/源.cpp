#include<stdio.h>
#include<stdlib.h>
int main()
{
	int peach, n, i, a;
	scanf_s("%d", &n);
	for (i = 1, a = 1; i < n; i++)
	{
		peach = (a + 1) * 2;
		a = peach;
	}
	printf("%d", peach);
	system("pause");
	return 0;
}