#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, temp1 = 0, temp2 = 0, temp3 = 1;
	int a, n, Sn = 0;
	printf("Please enter a value for a and n:");
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		temp1 = a * temp3 + temp2;
		temp2 = temp1;
		temp3 = temp3 * 10;
		Sn = Sn + temp2;
	}
	printf("Sn = %d\n", Sn);
	system("pause");
	return 0;
}