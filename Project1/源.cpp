#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	int a=0, b=0, c=0, d=0;//a字母，b数字，c空格，d其他
	ch = getchar();
	while (ch != '\n')
	{
		if (ch >= 'A'&&ch <= 'Z'|| ch >= 'a'&&ch <= 'z')
			a++;
		else if (ch >= '0'&&ch <= '9')
			b++;
		else if (ch == ' ')
			c++;
		else d++;
		ch = getchar();
	}
	printf("%d %d %d %d\n", a, b, c, d);
	system("pause");
	return 0;
}