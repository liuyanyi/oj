#include <stdio.h>
#include<stdlib.h>
int main() {
	int a[30] = { 9,12,13,23,24,35,46,54,57,67,89 };		//��������
	int i,j,m,zdp;											//i,j,m ѭ���� zdp����ж�ѭ����
	int x[10];												//��������������
	for (i = 0; i < 11; i++)								//�����ʾ
		printf("%d ", a[i]);
	printf("\nҪ�������:");								//����
	for(i=0;i<10;i++)
		scanf_s("%d", &x[i]);
	for (m = 0; m < 10; m++)								//x���鰤����a���
	{
		for (i = 0; i < 30 ; i++)							//�жϷ���
		{
			for (zdp = 0; a[zdp] != 0; zdp++);				//�����a������ÿ�������󣬷ŵ����һ�����棬zdp�����ж����һ����a��
			if (x[m] > a[zdp-1])							
			{
				a[zdp] = x[m];
				break;
			}
			if (a[i] > x[m])								//�������a������ÿ���������ж����ַ���
			{
				for (j = 29; j > i; j--)					//����������ǰ��һ��
					a[j] = a[j - 1];
				a[i] = x[m];
				break;										//�����ж�
			}
		}
	}
	for (i = 0; i < 30; ++i)								//���
	{
		if (a[i] == 0) break;								//����0�ж�
		printf("%d ", a[i]);								//���
	}
	printf("\n");
	system("pause");
	return 0;
}