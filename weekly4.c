#include<stdio.h>
int main()
{
	int numbers[3];
	int count = 0;
	for (int i = 0; i <= 3; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	for (int i = 0; i <= 3; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			count++;
		}
	}
	printf("%d", count);
}
