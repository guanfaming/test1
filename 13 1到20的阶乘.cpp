#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum = 0;
	int i = 0;
	int temp = 1;
	for (i = 1; i <= 20; i++)
	{
		temp = temp*i;
		sum = sum + temp;
	}
	printf("sum is:%d\n",sum);
	system("pause");
	return 0;
}