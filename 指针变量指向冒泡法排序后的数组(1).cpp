#include <stdio.h>
int main()
{
	int i, m, n, temp;
	int a[10],*p;
	printf("������10�����֣�");
	for (i = 0; i < 10; i++)          
	{
		scanf_s("%d",&a[i]);
	}
	for (m = 0; m < 9; m++)  //����ǱȽ�������10������Ҫ�Ƚ�9��
	{
		for (n = 0; n < 9 - m; n++)  //�ڲ��ǵ�ǰ�����Ƚϴ���
		{
			if (a[n] > a[n + 1])
			{
				temp = a[n];
				a[n] = a[n + 1];
				a[n + 1] = temp;
			}
		}
	}
	printf("���������֣�");
	for (p=a;p<(a+10);p++)  //ָ��ָ�����������鲢���
	{
		printf("%d,",*p);
	}
	return 0;
}