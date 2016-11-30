#include <stdio.h>
#include<stdlib.h>
int main() {
	int a[30] = { 9,12,13,23,24,35,46,54,57,67,89 };		//定义数组
	int i,j,m,zdp;											//i,j,m 循环用 zdp最大判断循环用
	int x[10];												//定义输入用数组
	for (i = 0; i < 11; i++)								//输出显示
		printf("%d ", a[i]);
	printf("\n要插入的数:");								//输入
	for(i=0;i<10;i++)
		scanf_s("%d", &x[i]);
	for (m = 0; m < 10; m++)								//x数组挨个往a里放
	{
		for (i = 0; i < 30 ; i++)							//判断放哪
		{
			for (zdp = 0; a[zdp] != 0; zdp++);				//如果比a数组里每个数都大，放到最后一个后面，zdp拿来判断最后一个是a几
			if (x[m] > a[zdp-1])							
			{
				a[zdp] = x[m];
				break;
			}
			if (a[i] > x[m])								//如果不比a数组里每个数都大，判断数字放哪
			{
				for (j = 29; j > i; j--)					//所有数字往前窜一个
					a[j] = a[j - 1];
				a[i] = x[m];
				break;										//放完中断
			}
		}
	}
	for (i = 0; i < 30; ++i)								//输出
	{
		if (a[i] == 0) break;								//碰到0中断
		printf("%d ", a[i]);								//输出
	}
	printf("\n");
	system("pause");
	return 0;
}