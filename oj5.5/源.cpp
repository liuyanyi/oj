#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y;
	scanf_s("%d", &x);
	if (x < 1)
		y = x;
	else if (x < 10)
		y = 2 * x - 1;
	else if (x >= 10)
		y = 3 * x - 11;
	printf("%d", y);
	system("pause");
	return 0;
}