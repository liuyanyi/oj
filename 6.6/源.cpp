#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a = 100, i, b;
	int c[3];
	while (a < 1000)
	{
		b = a;
		for (i = 0; i <= 2; i++)
		{
			c[i] = b % 10;
			b = b / 10;
		}
		if (a == pow(c[0], 3) + pow(c[1], 3) + pow(c[2], 3))
			printf("%d\n", a);
		a++;
	}
	system("pause");
	return 0;
}