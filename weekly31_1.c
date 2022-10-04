#include<stdio.h>
int main()
{
    int x[50],sum_even=0,sum_odd=0,diff;
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Data in Array");
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", x[i]);
    }
    for(int i=0;i<=9;i+=2)
    {
        sum_odd=sum_odd+x[i];
    }
    for(int i=1;i<=9;i+=2)
    {
        sum_even=sum_even+x[i];
    }
    diff=sum_odd-sum_even;
    printf("\n%d",diff);
}