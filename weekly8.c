#include<stdio.h>
int main()
{
    float x[10],sum=0;
    float avg;
    for(int i=0;i<=9;i++)
    {
        scanf("%f",&x[i]);
        sum=sum+x[i];
    }
    avg=sum/10;
    printf("%f",avg);
}