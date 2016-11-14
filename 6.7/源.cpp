#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,s,i,l;
	scanf_s("%d", &l);
	for (m = 2; m<l; m++)
	{
		s = 0;
		for (i = 1; i<m; i++)
			if (m%i== 0)
				s += i;
			if (s == m)
			{
				printf("%d its factors are ", m);
				for (i = 1; i<m; i++)
				{
					if (m%i == 0)
						printf("%d ", i);
				}
				printf("\n");
			}
	}
	system("pause");
	return 0;
}