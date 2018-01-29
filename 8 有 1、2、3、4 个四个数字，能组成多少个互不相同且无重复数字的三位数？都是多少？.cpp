#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k, m = 0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			for (k = 1; k <= 4; k++)
			{
				if ((i != j) && (i != k) && (j != k))
				{
					printf("%5d", i * 100 + j * 10 + k);
					m++;
					if (m % 10 == 0)
						printf("\n");
				}
			}
		}
	}
	printf("\nThe number of numbers is %d\n", m);
	system("pause");
	return 0;
}