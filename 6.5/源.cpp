#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a, b, c, s1, s2, s3, s,i;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	for (i = 1, s1 = 0; i <= a; i++)
		s1 += i;
	for (i = 1, s2 = 0; i <= b; i++)
		s2 += i*i;
	for (i = 1, s3 = 0; i <= c; i++)
		s3 += 1/i;
	s = s1 + s2 + s3;
	printf("%.2lf", s);
	system("pause");
	return 0;
}