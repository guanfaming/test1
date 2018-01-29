#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	printf("please enter two number:");
	scanf("%d%d", &a, &b);
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("Greatest common divisor is:%d\n", a);
	system("pause");
	return 0;
}
