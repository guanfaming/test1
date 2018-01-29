#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, m, n;
		printf("please enter two number:");
	scanf("%d%d", &a, &b);
	m = a;
	n = b;
	while (b != 0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	printf("Least common multiple is :%d\n", n*m / a);
	system("pause");
	return 0;
}