#include<stdio.h>
#include<stdlib.h>
int gys(int x, int y)
{
	int c;
	while (y != 0)
	{
		c = x%y; x = y;  y = c;
	}
	return x;
}
int gbs(int x, int y)
{
	int s;
	s = x*y / gys(x, y);
	return s;
}
int main()
{
	int a, b, c, d;
	scanf_s("%d%d", &a, &b);
	c = gys(a, b);
	d = gbs(a, b);
	printf("%d %d", c, d);
	system("pause");
	return 0;
}