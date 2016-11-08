#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a = 1, b = 2,c=3,s,i,n;
	scanf("%f",&n);
	for (i=1;i<=n;i++)
	{
		s+=b/a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%.2f",s);
	system("pause");
	return 0;
}