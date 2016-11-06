#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;			//a,ÀûÈó£¬b£¬½±½ğ
	scanf_s("%d", &a);
	if (a <= 100000)
		b = a / 10;
	else if (a < 200000) b = a / 20;
	printf("%d", b);
	system("pause");
	return 0;
}