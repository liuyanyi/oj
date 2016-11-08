#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x, xn=100, i=1, a;
	scanf_s("%f", &x);
	a = x;
	while (i>0.00001||i<-0.00001)
	{
		xn = 0.5*(x + a / x);
		i = xn - x;
		x = xn;
	}
	printf("%.3f", xn);
	system("pause");
	return 0;
}