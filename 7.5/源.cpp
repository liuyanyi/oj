#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
		printf("%d ", a[9-i]);
	system("pause");
	return 0;
}