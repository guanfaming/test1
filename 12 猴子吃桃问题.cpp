#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int n = 1;
	for (i = 1; i < 10; i++)
	{
		n = 2 * n + 1;
	}
	printf("The number of peaches is:%d\n", n);
	system("pause");
	return 0;
}