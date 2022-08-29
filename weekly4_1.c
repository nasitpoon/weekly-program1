#include<stdio.h>
int main10()
{
	int a, b, c, d;
	int count = 0;
	printf("Please input numbers");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a % 2 == 0)
	{
		count++;
	}
	if (b % 2 == 0)
	{
		count++;
	}
	if (c % 2 == 0)
	{
		count++;
	}
	if (d % 2 == 0)
	{
		count++;
	}
	printf("%d", count);
}