#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float m, n, t, i, s;
	scanf_s("%f%f", &m, &n);
	t = m*pow(0.5, n);
	printf("%.2f ", t);
	for (i = 1,s=m; i < n; i++)
		s += 2 * pow(0.5, i)*m;
	printf("%.2f", s);
	system("pause");
	return 0;
}