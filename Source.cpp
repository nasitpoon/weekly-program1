#include<stdio.h>
int main1()
{
	int a, b, c;
	printf("Please input 3 numbers");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d",a);
	}
	else if (b > a && b > c)
	{
		printf("%d", b);
	}
	else
	{
		printf("%d", c);
	}
	return 0;
}