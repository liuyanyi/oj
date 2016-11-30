#include<stdio.h>
#include<stdlib.h>
void zhuanzhi(int a[3][3])
{
	int b[3][3];
	int i, j;
	for(i=0;i<3;i++)
		for (j = 0; j < 3; j++)
			b[i][j] = a[j][i];
	for (i = 0; i<3; i++)
		for (j = 0; j < 3; j++)
			a[i][j] = b[i][j];
}

int main()
{
	int a[3][3];
	int i, j;
	for (j = 0; j < 3; j++)
		scanf_s("%d", &a[0][j]);
	for (j = 0; j < 3; j++)
		scanf_s("%d", &a[1][j]);
	for (j = 0; j < 3; j++)
		scanf_s("%d", &a[2][j]);
	zhuanzhi(a);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	system("pause");
	}