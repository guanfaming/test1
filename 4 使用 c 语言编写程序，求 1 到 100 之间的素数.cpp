#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n = 1;
	int i = 0;
	int k, m = 0;
	for (i = n; n <= 200; n++)
	{
		k = sqrt(n);
		for (i = 2; i <= k; i++)
			if (n % i == 0)
				break;
		if (i >= k + 1)
		{
			printf("%5d", n);
			m++;
			if (m % 10 == 0)
				printf("\n");
		}
	}
	system("pause");
	return 0;
}