#include<stdio.h>
int main()
{
	char str[1023];
	int max,x=0;
	printf("������һ���ַ���\n");
    gets_s(str);
    max = str[x];
    while (str[x] != '\0')
    {
        x = x + 1;
        if (str[x] > max)
            max = str[x];
    }
    printf("�����ַ���:%c", max);
}