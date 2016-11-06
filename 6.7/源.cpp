#include<stdio.h> 
#include<stdlib.h> 
int main()
{
	int i, j, yin,num,a;
	scanf_s("%d",&num);
	for (i = 1; i<num; i++)
	{
		int s = 0;
		yin = i;
		for (j = 1; j<yin; j++)
		{
			if (yin%j == 0)
				s = s + j;
		}
		if (yin == s)
		{
			printf("%d its factors are ", yin);
			a = yin;
			while (a != 1)
			{
				printf("1 2");
				if (a % 2 == 0)
				{
					a = a / 2;
					printf("%d ", a);
				}
				else if (a % 2 == 1)
				{
					a = (a + 1) / 2;
					printf("%d ", (a + 1) / 2);
				}	
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}