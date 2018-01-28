#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0;
	printf("please enter two number:");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		printf("The larger value is£º%d\n", a);
	}
	else
	{
		printf("The larger value is£º%d\n", b);
	}
	system("pause");
	return 0;
}