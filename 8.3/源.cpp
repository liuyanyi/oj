#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sushu(int x)
{
	int i;
	for (i = 2; i <= sqrt(x); i++)
		if (x%i == 0)
			return 0;
	return 1;
}
int main()
{
	int a,j;
	scanf_s("%d", &a);
	j = sushu(a);
	if (j == 0)
		printf("not prime");
	else if (j == 1)
		printf("prime");
	system("pause");
	return 0;
}