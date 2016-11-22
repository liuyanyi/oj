#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void d0(float a, float b, float c)
{
	float x1, x2;
	x1 = (-b + pow((pow(b, 2) - 4 * a*c), 0.5)) / (2 * a);
	x2 = (-b - pow((pow(b, 2) - 4 * a*c), 0.5)) / (2 * a);
	printf("x1=%.3f x2=%.3f", x1, x2);
}
void fuck0(float a, float b, float c)
{
	float x;
	x = -b / 2 * a;
	printf("x1=%.3f x2=%.3f", x, x);
}
void x0(float a, float b, float c)
{
	float s, i;
	s = -b / (2*a);
	i = (pow(4 * a*c - b*b,0.5) / (2 * a));
	printf("x1=%.3f+%.3fi x2=%.3f-%.3fi", s, i, s, i);
}
int main()
{
	float a, b, c, d;
	scanf_s("%f%f%f", &a, &b, &c);
	d = pow(b, 2) - 4 * a*c;
	if (d > 0) d0(a, b, c);
	else if (d == 0) fuck0(a, b, c);
	else if (d < 0) x0(a, b, c);
	system("pause");
	return 0;
}