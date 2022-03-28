#include<stdio.h>
int main()
{
	int gcd(int numa, int numb, int numc);
	int gcd(int num1, int num2);
	int a, b, c, m;
	printf("输入3个数字（用空格间隔）：\n");
	scanf_s("%d %d %d", &a, &b, &c);
	m = gcd(a, b, c);
	printf("最大公约数是：%d",m);
}
int gcd2(int num1, int num2)
{
	int x = num1, y = num2, temp, i, j=0;
	if (x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	for (i = y; i > 0; i--)
		if (x % i == 0 && y % i == 0)
		{
			j = i;
			break;
		}
	return (j);
}

int gcd(int numa, int numb, int numc)
{
	int x = numa, y = numb, z = numc, A, B, M;
	A = gcd2(x, y);
	B = gcd2(y, z);
	M = gcd2(A, B);
	return (M);
}
