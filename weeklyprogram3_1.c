#include<stdio.h>
int main()
{
	int a, b, c, l1, l2;
	printf("Please input 3 numbers");
	scanf_s("%d %d %d", &a, &b, &c);
	l1 = (a < b) * a + (b < a) * b;
	l2 = (l1 < c) * l1 + (c < l1) * c;
	printf("%d", l2);
	return 0;
}