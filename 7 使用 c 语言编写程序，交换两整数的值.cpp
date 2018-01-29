#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	printf("please enter two number:");
	scanf("%d%d", &a, &b);
	printf("The values of a and b before exchange are :a=%d b=%d\n", a, b);
	c = a;		//a = a + b;
	a = b;		//b = a - b;
	b = c;		//a = a - b;
	printf("The values of a and b after exchange are :a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}