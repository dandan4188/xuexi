#include<stdio.h>
int main()
{
	char str[1023];
	int max,x=0;
	printf("请输入一串字符：\n");
    gets_s(str);
    max = str[x];
    while (str[x] != '\0')
    {
        x = x + 1;
        if (str[x] > max)
            max = str[x];
    }
    printf("最大的字符是:%c", max);
}