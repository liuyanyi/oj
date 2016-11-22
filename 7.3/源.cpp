#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3];
	int h, l,sum1,sum2;
	for (h = 0; h < 3; h++)
		for (l = 0; l < 3; l++)
			scanf_s("%d", &a[h][l]);
	for (h = 0, sum1 = 0; h < 3; h++)
		sum1 += a[h][h];
	for (h = 0, sum2 = 0; h < 3; h++)
		sum2 += a[h][2-h];
	printf("%d %d", sum1, sum2);
	system("pause");
	return 0;
}