#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double a = 1, b = 2, sum = 0, temp;
	for (i = 0; i < 20; i++)
	{
		sum = sum + (b / a);
		temp = a;
		a = b;
		b = a + temp;
	}
	printf("The sum of the first 20 entries in this series is %f\n", sum);
	system("pause");
	return 0;
}