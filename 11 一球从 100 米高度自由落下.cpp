#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double h = 100;
	double temp = h;
	double s = 0;
	for (i = 0; i < 3; i++)
	{
		s = s + 2*h;
		h = h / 2;
	}
	s = s - temp;
	printf("第10次落地时共经过的距离：%f\n第10次反弹的高度:%f \n", s, h);
	system("pause");
	return 0;
}