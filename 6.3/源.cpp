#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, sum = 0, a=2,b,n;
	scanf_s("%d", &n);
	b = a;
	for (i = 0; i<n; i++)
	{
		sum += a;
		a = 10 * a + b;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}