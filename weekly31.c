#include <stdio.h>
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
    for (int i = 0; i <= 9; i++)
    {
        if (i % 2 ==0)
        {
            sum_even=sum_even+x[i];
        }
        else
        {
            sum_odd=sum_odd+x[i];
        }
    }
    diff=sum_odd-sum_even;
    printf("\n%d",diff);
}