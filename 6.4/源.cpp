#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int s=1, i=1,n=1,t=1,sn=0;//LONG INT !!!!!!
	scanf_s("%ld", &n);
	for(t=1;t<=n;t++)
		for (; i <= t; i++)
		{
			s = s*i;
			sn += s;
		}
	printf("%ld", sn);
	system("pause");
	return 0;
}