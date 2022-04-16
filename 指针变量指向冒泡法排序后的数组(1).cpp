#include <stdio.h>
int main()
{
	int i, m, n, temp;
	int a[10],*p;
	printf("请输入10个数字：");
	for (i = 0; i < 10; i++)          
	{
		scanf_s("%d",&a[i]);
	}
	for (m = 0; m < 9; m++)  //外层是比较轮数，10个数字要比较9轮
	{
		for (n = 0; n < 9 - m; n++)  //内层是当前轮数比较次数
		{
			if (a[n] > a[n + 1])
			{
				temp = a[n];
				a[n] = a[n + 1];
				a[n + 1] = temp;
			}
		}
	}
	printf("排序后的数字：");
	for (p=a;p<(a+10);p++)  //指针指向排序后的数组并输出
	{
		printf("%d,",*p);
	}
	return 0;
}