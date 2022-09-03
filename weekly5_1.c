#include<stdio.h>
int main()
{
    int x,i=1;
    printf("Please input number");
    scanf("%d",&x);
    while(i<=x)
    {
        printf("*");
        i++;
    }
}